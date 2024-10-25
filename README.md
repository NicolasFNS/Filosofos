APS - Atividade Pr ́atica Supervisionada

O objetivo deste trabalho  ́e a utiliza ̧c ̃ao dos conceitos de threads e mutex em linguagem C para a solução do problema Jantar dos Filósofos. Abaixo  ́e apresentado a descrição do problema:
Cinco filósofos estão sentados à volta de uma mesa circular. Cada filósofo passa seu tempo pensando e comendo. Para comer, cada filósofo precisa de dois talheres. Na mesa, há cinco talheres dispon ́ıveis, onde para 
cada filósofo temos um talher à esquerda e outro à direita. Os filósofos podem pensar a qualquer momento, mas só podem comer quando tiverem dois talheres (esquerda e direita).

Figura 1: Problema do Jantar dos Fil ́osofos

As regras são as seguintes:
1. Cada filósofo deve pensar por exatamente 5 segundos e após isso tentar se alimentar.
2. Para comer, um filósofo deve pegar o talher à sua esquerda e o talher à sua direita. Somente quando tiver posse dos dois talheres o filósofo poder ́a se alimentar. Ap ́os iniciar a alimenta ̧cão, cada filósofo
demora 1 segundo se alimentando.
3. Os filósofos devem ser capazes de pegar os talheres de maneira que n ̃ao ocorram deadlocks (impasses) e que todos tenham a oportunidade de comer.
O objetivo da aplicação  ́e fazer com que os filósofos fa ̧cam suas atividades de forma cíclica, ou seja, sempre os mesmos ou estar ̃ao ou pensando ou comendo.
Deixe claro através de impressções no console (printf) qual atividade o filósofo come ̧cou a realizar e qual finalizou. Pense cada filósofo como uma thread e cada talher como um mutex.
