APS - Atividade Prática Supervisionada

O objetivo deste trabalho  ́e a utilização dos conceitos de threads e mutex em linguagem C para a solução do problema Jantar dos Filósofos. Abaixo é apresentado a descrição do problema:
Cinco filósofos estão sentados à volta de uma mesa circular. Cada filósofo passa seu tempo pensando e comendo. Para comer, cada filósofo precisa de dois talheres. Na mesa, há cinco talheres disponíveis, onde para 
cada filósofo temos um talher à esquerda e outro à direita. Os filósofos podem pensar a qualquer momento, mas só podem comer quando tiverem dois talheres (esquerda e direita).

As regras são as seguintes:
1. Cada filósofo deve pensar por exatamente 5 segundos e após isso tentar se alimentar.
2. Para comer, um filósofo deve pegar o talher à sua esquerda e o talher à sua direita. Somente quando tiver posse dos dois talheres o filósofo poder ́a se alimentar. Após iniciar a alimentação, cada filósofo
demora 1 segundo se alimentando.
3. Os filósofos devem ser capazes de pegar os talheres de maneira que n ̃ao ocorram deadlocks (impasses) e que todos tenham a oportunidade de comer.
O objetivo da aplicação ́e fazer com que os filósofos façam suas atividades de forma cíclica, ou seja, sempre os mesmos ou estar ̃ao ou pensando ou comendo.
Deixe claro através de impressões no console (printf) qual atividade o filósofo começou a realizar e qual finalizou. Pense cada filósofo como uma thread e cada talher como um mutex.
