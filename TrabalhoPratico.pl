% GRUPO: Miguel de Castro Souza , Guilherme Fornaciari e João Vitor Simão

% ------------------------------------------------------------
% --------------- ETAPA 1 DEFINIR PREDICADOS -----------------
% ------------------------------------------------------------

%Aqui, declaramos os técnicos.
%As declarações decorrem do trecho "Rogério e Ivone são técnicos"
%tecnico
tecnico(rogerio).
tecnico(ivone).

%Aqui, declaramos os engenheiros
%As declarações decorrem do trecho "Daniel, Isabel, Oscar, Tomás e Ana são engenheiros"
%engenheiro
engenheiro(daniel).
engenheiro(isabel).
engenheiro(oscar).
engenheiro(tomas).
engenheiro(ana).

%Aqui, declaramos os Supervisores
%As declarações decorrem do trecho "Luís é supervisor"
%supervisor
supervisor(luis).

%Aqui declaramos os Supervisores Chefes
%As declarações decorrem do trecho "Sônia é supervisora chefe"
%supervisorChefe
supervisorChefe(sonia).

%Aqui declaramos as Secretarias Executivas
%As declarações decorrem do trecho " Laura é secretária executiva"
%secretariaExecutiva
secretariaExecutiva(laura).

%Aqui, declaramos os diretores
%As declarações decorrem do trecho "Santiago é diretor"
%diretor
diretor(santiago).

%analista
%Com efeito, o cargo de analista não possui qualquer pessoa atribuída a ele.
%Dessa forma, como convenção, foi decidio que seria uma analista aquele que não pertencesse a outros cargos
analista(A) :- \+engenheiro(A), \+supervisor(A), \+tecnico(A), \+supervisorChefe(A), \+secretariaExecutiva(A), \+diretor(A).

%Aqui estabelecemos a relação de chefia
%O predicado chefiado_por recebe duas pessoas. Cada linha estabele uma relação direta de chefia
%O primeiro parametro é chefiado pelo segundo chefiado_por(X, Y) X é chefiado por Y
%chefiado_por/2
chefiado_por(T, E) :- tecnico(T), engenheiro(E). %"Os técnicos são chefiados por engenheiros"
chefiado_por(E, S) :- engenheiro(E), supervisor(S). %"Os engenheiros são chefiados pelos supervisores"
chefiado_por(A, S) :- analista(A), supervisor(S). %"Os analistas também são chefiados pelos supervisores"
chefiado_por(S, SC) :- supervisor(S), supervisorChefe(SC). %"Os supervisores são chefiados pelo supervisor chefe"
chefiado_por(SC, D) :- supervisorChefe(SC), diretor(D). %"O supervisor chefe é chefiado pelo diretor"
chefiado_por(SE, D) :- secretariaExecutiva(SE), diretor(D). %"A secretária executiva também é chefiada pelo diretor"

%isso define transitividade entre as relações de chefia
chefe(X, Y) :- chefiado_por(Y, X). 
chefe(X, Y) :- chefiado_por(Z, X), chefe(Z, Y).

%Isso será útil para fazer a última questão
%Essa estrutura apenas verifica se a pessoa inserida pertence a algum cargo e atribui esse cargo à variável Cargo

nao_chefiado_por_diretor(Pessoa) :-
    \+ (diretor(D), chefe(D, Pessoa)).

cargo([tecnico, engenheiro, analista, supervisor, supervisorChefe, secretariaExecutiva, diretor]).

cargo_de(Pessoa, tecnico) :- tecnico(Pessoa).
cargo_de(Pessoa, engenheiro) :- engenheiro(Pessoa).
cargo_de(Pessoa, supervisor) :- supervisor(Pessoa).
cargo_de(Pessoa, supervisorChefe) :- supervisorChefe(Pessoa).
cargo_de(Pessoa, secretariaExecutiva) :- secretariaExecutiva(Pessoa).
cargo_de(Pessoa, diretor) :- diretor(Pessoa).
cargo_de(Pessoa, analista) :- analista(Pessoa).

descobrir_cargo(Pessoa, Cargo) :-
    nao_chefiado_por_diretor(Pessoa),
    (   tecnico(Pessoa) -> Cargo = tecnico
    ;   engenheiro(Pessoa) -> Cargo = engenheiro
    ;   supervisor(Pessoa) -> Cargo = supervisor
    ;   supervisorChefe(Pessoa) -> Cargo = supervisorChefe
    ;   secretariaExecutiva(Pessoa) -> Cargo = secretariaExecutiva
    ;   diretor(Pessoa) -> Cargo = diretor
    ;   analista(Pessoa) -> Cargo = analista
    ;   Cargo = desconhecido
    ).

    imprimir_cargo(Pessoa) :-
    descobrir_cargo(Pessoa, Cargo),
    format('A pessoa ~w ocupa o cargo de ~w.~n', [Pessoa, Cargo]).
% ------------------------------------------------------------
% --------------- ETAPA 2 CONFIGURAR PROJETO -----------------
% ------------------------------------------------------------


%Seguem abaixo, algumas configurações para que o programa possa ser executado como script
%Basta rodar 'swipl -s TrabalhoPratico.pl'
:- set_prolog_flag(verbose, silent). 
:- initialization(main).


% ------------------------------------------------------------
% --------------- ETAPA 3 REALIZAR CONSULTAS -----------------
% ------------------------------------------------------------

main :-
  format('------------------------------------------------------------------------------------------------------~n'),
  format('Quem são os chefes dos técnicos e por quem eles são chefiados?~n'),
  format('------------------------------------------------------------------------------------------------------~n'),
  
  % Aqui listamos os técnicos
  format('São técnicos: '),
  forall(tecnico(T),
  format('~w ', [T])),
  format('~n'),

  %Segue aqui uma listagem de chefes dos técnicos
  %setof me fornece uma lista de Chefes que atendem à condição descrita em tecnico(T), chefiado_por(T, C). A lista é nomeada Lista_Chefes_Com_Duplicatas
  setof(C, (tecnico(T), chefiado_por(T, C)), Lista_Chefes_Com_Duplicatas),
  sort(Lista_Chefes_Com_Duplicatas, Lista_Chefes_Diretos_Dos_Tecnicos),
  
  % Aqui listamos os chefes diretos dos técnicos
  %O member pega os elementos da listagem montada anteriormente
  format('São chefes diretos dos técnicos: '),
  forall(member(C, Lista_Chefes_Diretos_Dos_Tecnicos),
    format('~w ', [C])),
  format('~n'),

  %aqui listamos os chefes diretos e indiretos dos técnicos
  % setof(C, (tecnico(T), chefiado_por(T, C)), Lista_Chefes_Com_Duplicatas),
  % sort(Lista_Chefes_Com_Duplicatas, Lista_Chefes_Dos_Tecnicos)

  % format('São chefes diretos e indiretos dos técnicos: '),
  

  format('~n~n'),

  format('------------------------------------------------------------------------------------------------------~n'),
  format('Quem é o chefe da Ivone e qual é o cargo deste chefe?~n'),
  format('------------------------------------------------------------------------------------------------------~n'),

  %Para obter essa listagem não são necessárias pesquisas mais complexas
  format('Ivone é chefiada por: '),
  forall(chefiado_por(ivone, C),
    format('~w ', [C])),
  format('~n~n'),

  format('------------------------------------------------------------------------------------------------------~n'),
  format('Quem são as pessoas chefiados pelo supervisor chefe ou pelo supervisor?~n'),
  format('------------------------------------------------------------------------------------------------------~n'),

  format('São chefiados pelo supervisor chefe ou pelo supervisor: '),

  %Aqui temos uma listagem de pessoas chefiadas pelo supervisor ou pelo supervisor chefee
  setof(P, ((supervisor(S); supervisorChefe(S)),(chefiado_por(P, S))), Lista_Chefiados_Com_Duplicatas),
  sort(Lista_Chefiados_Com_Duplicatas, Lista_Chefiados),

  forall(member(P, Lista_Chefiados),
    format('~w ', [P])),

  format('~n~n'),

  format('------------------------------------------------------------------------------------------------------~n'),
  format('Sabendo que Carolina não é chefiada pelo diretor, qual é o seu cargo?~n'),
  format('------------------------------------------------------------------------------------------------------~n').

  setof(C, (nao_chefiado_por_diretor(P)), Lista_Nao_Chefiado_Com_Duplicatas),
  sort(Lista_Nao_Chefiado_Com_Duplicatas,Lista_nao_Chefiados),
  forall(nao_chefiado_por_diretor(P),
    format('~w ', [P])),

  format('~n~n'),

  %para determinar o cargo da carolina, listo todos os cargos

  forall(member(C, Lista_Chefes_Diretos_Dos_Tecnicos),
    format('~w ', [C])),
  format('~n'),