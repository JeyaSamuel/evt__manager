typedef void (*fp)(void);

void reg_event(int id, int bit_map,fp ad );

void execute_event(int event);
