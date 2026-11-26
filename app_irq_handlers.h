#ifndef APP_IRQ_HANDLERS_H
#define APP_IRQ_HANDLERS_H
/* Physical vector bytes: timer 0x2E, UART1 RX 0x26 (iodefine.h INTSR1).
 * App ISR definitions are global RETI functions without vect=. */
#define APP_IRQ_HANDLERS(X) \
    X(0x2E, IspTimerIsr) \
    X(0x26, IspUartRxIsr)
#endif
