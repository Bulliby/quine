# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwells <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/12 15:13:14 by gwells            #+#    #+#              #
#    Updated: 2017/01/12 15:38:00 by gwells           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLLEEN		= Colleen
GRACE		= Grace
SULLY		= Sully

$(shell mkdir -p .obj 2> /dev/null)

OBJ_PATH	= .obj/
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror 

# ***************************NMOTOOL******************************************** #
CCOLLEEN	= Colleen.c
OCOLLEEN	= .obj/Colleen.o

# ***************************OTOOL******************************************** #
CGRACE		= Grace.c
OGRACE		= .obj/Grace.o
			 
# ****************************NM********************************************* #
CSULLY		= Sully.c
OSULLY		= .obj/Sully.o

###############################################################################

all: $(COLLEEN) $(GRACE) $(SULLY) 

.obj/%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(COLLEEN): $(OCOLLEEN)
	$(CC) $(CFLAGS) $(OCOLLEEN) -o $(COLLEEN) 

$(GRACE): $(OGRACE)
	$(CC) $(CFLAGS) $(OGRACE) -o $(GRACE) 

$(SULLY): $(OSULLY)
	$(CC) $(CFLAGS) $(OSULLY) -o $(SULLY) 

clean:
	rm -rf $(OSULLY) $(OCOLLEEN) $(OGRACE) $(OBJNM)

fclean: clean
	rm -rf $(SULLY) $(COLLEEN) $(GRACE)

re: fclean $(COLLEEN) $(GRACE) $(SULLY)
