/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("www.saucedemo.com", 
		"URL=https://www.saucedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("submit", 
		"URL=https://events.backtrace.io/api/summed-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("submit_2", 
		"URL=https://events.backtrace.io/api/unique-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.html", 
		"URL=https://www.saucedemo.com/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	/* login */

	lr_think_time(11);

	web_custom_request("submit_3", 
		"URL=https://events.backtrace.io/api/summed-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("submit_4", 
		"URL=https://events.backtrace.io/api/unique-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(22);

	web_custom_request("submit_5", 
		"URL=https://events.backtrace.io/api/summed-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("submit_6", 
		"URL=https://events.backtrace.io/api/unique-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
