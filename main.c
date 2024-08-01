#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	const char *quotes[] = {
		"People can be more understanding than you think they'll be. - Leah Anderson",
		"It is during our darkest moments that we must focus to see the light. - Aristotle Onassis",
		"No act of kindness, no matter how small, is ever wasted. - Aesop",
		"Learn from yesterday, live for today, hope for tomorrow. The important thing is not to stop questioning. - Albert Einstein",
		"Your work is going to fill a large part of your life, and the only way to be truly satisfied is to do what you believe is great work. And the only way to do great work is to love what you do. If you haven't found it yet, keep looking. Don't settle. As with all matters of the heart, you'll know when you find it. - Steve Jobs",
		"Microsoft isn't evil, they just make really crappy operating systems. - Linus Torvalds",
		 "Software is like sex: it's better when it's free. - Linus Torvalds",
		 "You might not think that programmers are artists, but programming is an extremely creative profession. It's logic-based creativity. - John Romero",
		 "The memory management on the PowerPC can be used to frighten small children. - Linus Torvalds",
		 "If you start doing things because you hate others and want to screw them over, the end result is bad. - Linus Torvalds",
		 "The secret of getting ahead is getting started. - Mark Twain",
		 "Always code as if the guy who ends up maintaining your code will be a violent psychopath who knows where you live. - Martin Golding",
		 "Programming is like sex. One mistake and you have to support it for the rest of your life. - Michael Sinz",
		 "There are only two kinds of languages: the ones people complain about and the ones nobody uses. - Bjarne Stroustrup",
		 "Being a good software engineer is 3 percent talent, 97 percent not being distracted by the internet.",
		 "Code is like humor. When you have to explain it, it’s bad. – Cory House",
		 "In open source, we feel strongly that to really do something well, you have to get a lot of people involved. - Linus Torvalds"
	    // if you want to add more quotes, it won't work if you add a comma at the end of the last one
  };
	const size_t quotecounter = sizeof(quotes)/sizeof(quotes[0]);
	srand(time(NULL));
	printf("%s\n", quotes[rand() % quotecounter]);
	return 0;
}
