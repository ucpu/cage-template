#include <cage-core/logger.h>

using namespace cage;

int main(int argc, char *args[])
{
	try
	{
		// log to console
		Holder<Logger> log = newLogger();
		log->format.bind<logFormatConsole>();
		log->output.bind<logOutputStdOut>();

		CAGE_LOG(SeverityEnum::Info, "cage-template", "hello world");

		return 0;
	}
	catch (...)
	{
		detail::logCurrentCaughtException();
		return 1;
	}
}
