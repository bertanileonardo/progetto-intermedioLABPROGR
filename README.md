# PROGETTO INTERMEDIO - LABORATORIO DI PROGRAMMAZIONE

## Gruppo Bertani, Gasparoni, Vanon

Per testare il codice (il cui tester si trova nel file `src/main.cpp` ) eseguire le operazioni sottostanti (eventualmente premettendo `sudo` per ottenere i privilegi di amministrazione dove necessario), quando ci si trova già all'interno della directory del progetto:

```prompt
cmake ./
cmake --build ./
./a
```

Speriamo che tutto funzioni correttamente e buona fortuna a tutti per i propri progetti!

#### Alcune note sulle scelte di progettazione

1. Si è voluto, in caso di costruttore senza data, che la data venisse impostata sul giorno della morte di Gutenberg (padre della stampa). Questo solo per poter salvare una data nel formato predefinito. In questo caso, stampando la data in questione apparirà come `undefined` poichè con un controllo sostituiamo la data di default con uno stato inconsistente del dato.
2. Per quanto riguarda la stampa, abbiamo svolto l'overloading dell'operatore `<<` ma abbiamo preferito, anche per motivi di stile aggiugnere la possibilità di utilizzare `to_string()` tramite l'overloading anche di questa funzione.
