// © 2011. Ravi Teja Gudapati. All rights reserved.

#include <driv/uart0/uart0.h>
#include "driv/cpu/cpu.h"

int main(void) {
	cpu_init();

	uart0_init(Uart_Baudrate_4800);

	// Print start
	uart0_putc('s');
	uart0_print_newline();

	// Print finish
	uart0_putc('k');
	uart0_print_newline();

	while(1);
}
