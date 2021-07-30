# problem 2

from os import write


def highest_grossing(yearFrom,yearUpto,genre):
    f = open('IMDB_reviews.csv','r')
    head = f.readline().strip().split(',')
    nameIndex = head.index('name')
    yearIndex = head.index('year')
    genreIndex = head.index('genre')
    grossIndex = head.index('gross')
    maxGrossing = 0
    maxGrossingMovie = ''
    while True:
        line = f.readline().strip()
        if not line:
            break
        l = line.split(',')
        if l[yearIndex] != '' and yearFrom <= int(l[yearIndex]) <= yearUpto and genre in l[genreIndex]:
            if l[grossIndex] != '' and int(l[grossIndex]) > maxGrossing:
                maxGrossing = int(l[grossIndex])
                maxGrossingMovie = l[nameIndex]
    f.close()
    return maxGrossingMovie

def get_data():
    file = '''id,name,year,runtime,genre,rating,metascore,timeline,votes,gross
0,The Shawshank Redemption,1994,142,Drama,9.3,80,Two imprisoned men bond
over a number of years finding solace and eventual redemption through acts
of common decency.,2394059,28340000
1,The Godfather,1972,175,Crime Drama,9.2,100,An organized crime dynasty's
aging patriarch transfers control of his clandestine empire to his
reluctant son.,1658439,134970000
2,Soorarai Pottru,2020,153,Drama,9.1,,Nedumaaran Rajangam "Maara" sets out
to make the common man fly and in the process takes on the world's most
capital intensive industry and several enemies who stand in his way.,78266,
3,The Dark Knight,2008,152,Action Crime Drama,9.0,84,When the menace known
as the Joker wreaks havoc and chaos on the people of Gotham Batman must
accept one of the greatest psychological and physical tests of his ability
to fight injustice.,2355907,534860000
4,The Godfather: Part II,1974,202,Crime Drama,9.0,90,The early life and
career of Vito Corleone in 1920s New York City is portrayed while his son
Michael expands and tightens his grip on the family crime
syndicate.,1152912,57300000
5,12 Angry Men,1957,96,Crime Drama,9.0,96,A jury holdout attempts to
prevent a miscarriage of justice by forcing his colleagues to reconsider
the evidence.,706079,4360000
6,The Lord of the Rings: The Return of the King,2003,201,Action Adventure
Drama,8.9,94,Gandalf and Aragorn lead the World of Men against Sauron's
army to draw his gaze from Frodo and Sam as they approach Mount Doom with
the One Ring.,1672460,377850000
7,Pulp Fiction,1994,154,Crime Drama,8.9,94,The lives of two mob hitmen a
boxer a gangster and his wife and a pair of diner bandits intertwine in
four tales of violence and redemption.,1862472,107930000
8,Schindler's List,1993,195,Biography Drama History,8.9,94,In Germanoccupied Poland during World War II industrialist Oskar Schindler gradually
becomes concerned for his Jewish workforce after witnessing their
persecution by the Nazis.,1236213,96900000
9,Inception,2010,148,Action Adventure Sci-Fi,8.8,74,A thief who steals
corporate secrets through the use of dream-sharing technology is given the
inverse task of planting an idea into the mind of a
C.E.O.,2113984,292580000
10,Fight Club,1999,139,Drama,8.8,66,An insomniac office worker and a devilmay-care soap maker form an underground fight club that evolves into much
more.,1892181,37030000
11,The Lord of the Rings: The Fellowship of the Ring,2001,178,Action
Adventure Drama,8.8,92,A meek Hobbit from the Shire and eight companions
set out on a journey to destroy the powerful One Ring and save Middle-earth
from the Dark Lord Sauron.,1693187,315540000
12,Forrest Gump,1994,142,Drama Romance,8.8,82,The presidencies of Kennedy
and Johnson the Vietnam War the Watergate scandal and other historical
events unfold from the perspective of an Alabama man with an IQ of 75 whose
only desire is to be reunited with his childhood
sweetheart.,1851357,330250000
13,The Good the Bad and the Ugly,1966,178,Western,8.8,90,A bounty hunting
scam joins two men in an uneasy alliance against a third in a race to find
a fortune in gold buried in a remote cemetery.,700347,6100000
14,The Lord of the Rings: The Two Towers,2002,179,Action Adventure
Drama,8.7,87,While Frodo and Sam edge closer to Mordor with the help of the
shifty Gollum the divided fellowship makes a stand against Sauron's new
ally Saruman and his hordes of Isengard.,1512442,342550000
15,The Matrix,1999,136,Action Sci-Fi,8.7,73,When a beautiful stranger leads
computer hacker Neo to a forbidding underworld he discovers the shocking
truth--the life he knows is the elaborate deception of an evil cyberintelligence.,1710438,171480000
16,Goodfellas,1990,146,Biography Crime Drama,8.7,90,The story of Henry Hill
and his life in the mob covering his relationship with his wife Karen Hill
and his mob partners Jimmy Conway and Tommy DeVito in the Italian-American
crime syndicate.,1042578,46840000
17,Star Wars: Episode V - The Empire Strikes Back,1980,124,Action Adventure
Fantasy,8.7,82,After the Rebels are brutally overpowered by the Empire on
the ice planet Hoth Luke Skywalker begins Jedi training with Yoda while his
friends are pursued by Darth Vader and a bounty hunter named Boba Fett all
over the galaxy.,1178844,290480000
18,One Flew Over the Cuckoo's Nest,1975,133,Drama,8.7,84,A criminal pleads
insanity and is admitted to a mental institution where he rebels against
the oppressive nurse and rallies up the scared patients.,933318,112000000
19,Parasite,2019,132,Comedy Drama Thriller,8.6,96,Greed and class
discrimination threaten the newly formed symbiotic relationship between the
wealthy Park family and the destitute Kim clan.,608406,53370000
20,Interstellar,2014,169,Adventure Drama Sci-Fi,8.6,74,A team of explorers
travel through a wormhole in space in an attempt to ensure humanity's
survival.,1558558,188020000
21,City of God,2002,130,Crime Drama,8.6,79,In the slums of Rio two kids'
paths diverge as one struggles to become a photographer and the other a
kingpin.,709284,7560000
22,Spirited Away,2001,125,Animation Adventure Family,8.6,96,During her
family's move to the suburbs a sullen 10-year-old girl wanders into a world
ruled by gods witches and spirits and where humans are changed into
beasts.,670674,10060000
23,Saving Private Ryan,1998,169,Drama War,8.6,91,Following the Normandy
Landings a group of U.S. soldiers go behind enemy lines to retrieve a
paratrooper whose brothers have been killed in action.,1262408,216540000
24,The Green Mile,1999,189,Crime Drama Fantasy,8.6,61,The lives of guards
on Death Row are affected by one of their charges: a black man accused of
child murder and rape yet who has a mysterious gift.,1173460,136800000
25,Life Is Beautiful,1997,116,Comedy Drama Romance,8.6,59,When an openminded Jewish librarian and his son become victims of the Holocaust he uses
a perfect mixture of will humor and imagination to protect his son from the
dangers around their camp.,636745,57600000
26,Se7en,1995,127,Crime Drama Mystery,8.6,65,Two detectives a rookie and a
veteran hunt a serial killer who uses the seven deadly sins as his
motives.,1477013,100130000
27,The Silence of the Lambs,1991,118,Crime Drama Thriller,8.6,85,A young
F.B.I. cadet must receive the help of an incarcerated and manipulative
cannibal killer to help catch another serial killer a madman who skins his
victims.,1298483,130740000
28,Star Wars: Episode IV - A New Hope,1977,121,Action Adventure
Fantasy,8.6,90,Luke Skywalker joins forces with a Jedi Knight a cocky pilot
a Wookiee and two droids to save the galaxy from the Empire's worlddestroying battle station while also attempting to rescue Princess Leia
from the mysterious Darth Vader.,1250920,322740000
29,Hara-Kiri,1962,133,Action Drama Mystery,8.6,85,When a ronin requesting
seppuku at a feudal lord's palace is told of the brutal suicide of another
ronin who previously visited he reveals how their pasts are intertwined -
and in doing so challenges the clan's integrity.,44985,
30,Seven Samurai,1954,207,Action Adventure Drama,8.6,98,A poor village
under attack by bandits recruits seven unemployed samurai to help them
defend themselves.,321308,270000
31,It's a Wonderful Life,1946,130,Drama Family Fantasy,8.6,89,An angel is
sent from Heaven to help a desperately frustrated businessman by showing
him what life would have been like if he had never existed.,412456,
32,Hamilton,2020,160,Biography Drama History,8.5,90,The real life of one of
America's foremost founding fathers and first Secretary of the Treasury
Alexander Hamilton. Captured live on Broadway from the Richard Rodgers
Theater with the original Broadway cast.,64486,
33,Raatchasan,2018,170,Action Crime Thriller,8.5,,A sub-inspector sets out
in pursuit of a mysterious serial killer who targets teen school girls and
murders them brutally.,29637,
34,Whiplash,2014,106,Drama Music,8.5,88,A promising young drummer enrolls
at a cut-throat music conservatory where his dreams of greatness are
mentored by an instructor who will stop at nothing to realize a student's
potential.,738672,13090000
35,The Intouchables,2011,112,Biography Comedy Drama,8.5,57,After he becomes
a quadriplegic from a paragliding accident an aristocrat hires a young man
from the projects to be his caregiver.,778379,13180000
36,The Prestige,2006,130,Drama Mystery Sci-Fi,8.5,66,After a tragic
accident two stage magicians engage in a battle to create the ultimate
illusion while sacrificing everything they have to outwit each
other.,1215602,53090000
37,The Departed,2006,151,Crime Drama Thriller,8.5,85,An undercover cop and
a mole in the police attempt to identify each other while infiltrating an
Irish gang in South Boston.,1212956,132380000
38,The Pianist,2002,150,Biography Drama Music,8.5,85,A Polish Jewish
musician struggles to survive the destruction of the Warsaw ghetto of World
War II.,748697,32570000
39,Gladiator,2000,155,Action Adventure Drama,8.5,67,A former Roman General
sets out to exact vengeance against the corrupt emperor who murdered his
family and sent him into slavery.,1366190,187710000
40,American History X,1998,119,Drama,8.5,62,A former neo-nazi skinhead
tries to prevent his younger brother from going down the same wrong path
that he did.,1049308,6720000
41,The Usual Suspects,1995,106,Crime Mystery Thriller,8.5,77,A sole
survivor tells of the twisty events leading up to a horrific gun battle on
a boat which began when five criminals met at a seemingly random police
lineup.,1007527,23340000
42,Leon: The Professional,1994,110,Action Crime Drama,8.5,64,Mathilda a 12-
year-old girl is reluctantly taken in by Leon a professional assassin after
her family is murdered. An unusual relationship forms as she becomes his
protegee and learns the assassin's trade.,1056159,19500000
43,The Lion King,1994,88,Animation Adventure Drama,8.5,88,Lion prince Simba
and his father are targeted by his bitter uncle who wants to ascend the
throne himself.,961309,422780000
44,Terminator 2: Judgment Day,1991,137,Action Sci-Fi,8.5,75,A cyborg
identical to the one who failed to kill Sarah Connor must now protect her
ten year old son John Connor from a more advanced and powerful
cyborg.,1010778,204840000
45,Cinema Paradiso,1988,155,Drama Romance,8.5,80,A filmmaker recalls his
childhood when falling in love with the pictures at the cinema of his home
village and forms a deep friendship with the cinema's
projectionist.,236441,11990000
46,Grave of the Fireflies,1988,89,Animation Drama War,8.5,94,A young boy
and his little sister struggle to survive in Japan during World War
II.,243008,
47,Back to the Future,1985,116,Adventure Comedy Sci-Fi,8.5,87,Marty McFly a
17-year-old high school student is accidentally sent thirty years into the
past in a time-traveling DeLorean invented by his close friend the
eccentric scientist Doc Brown.,1081797,210610000
48,Once Upon a Time in the West,1968,165,Western,8.5,80,A mysterious
stranger with a harmonica joins forces with a notorious desperado to
protect a beautiful widow from a ruthless assassin working for the
railroad.,307736,5320000
49,Psycho,1960,109,Horror Mystery Thriller,8.5,97,A Phoenix secretary
embezzles $40000 from her employer's client goes on the run and checks into
a remote motel run by a young man under the domination of his
mother.,615511,32000000
50,Rear Window,1954,112,Mystery Thriller,8.5,100,A wheelchair-bound
photographer spies on his neighbors from his apartment window and becomes
convinced one of them has committed murder.,452067,36760000
51,Casablanca,1942,102,Drama Romance War,8.5,100,A cynical expatriate
American cafe owner struggles to decide whether or not to help his former
lover and her fugitive husband escape the Nazis in French
Morocco.,530400,1020000
52,Modern Times,1936,87,Comedy Drama Family,8.5,96,The Tramp struggles to
live in modern industrial society with the help of a young homeless
woman.,222623,160000
53,City Lights,1931,87,Comedy Drama Romance,8.5,99,With the aid of a
wealthy erratic tippler a dewy-eyed tramp who has fallen in love with a
sightless flower girl accumulates money to be able to help her
medically.,171097,20000
54,Capharnaum,2018,126,Drama,8.4,75,While serving a five-year sentence for
a violent crime a 12-year-old boy sues his parents for
neglect.,68968,1660000
55,Joker,2019,122,Crime Drama Thriller,8.4,59,In Gotham City mentally
troubled comedian Arthur Fleck is disregarded and mistreated by society. He
then embarks on a downward spiral of revolution and bloody crime. This path
brings him face-to-face with his alter-ego: the Joker.,998809,335450000
56,Ayla: The Daughter of War,2017,125,Biography Drama History,8.4,,In 1950
amid-st the ravages of the Korean War Sergeant Suleyman stumbles upon a
half-frozen little girl with no parents and no help in sight. Frantic
scared and on the verge of death ... ,35523,
57,Vikram Vedha,2017,147,Action Crime Drama,8.4,,Vikram a no-nonsense
police officer accompanied by Simon his partner is on the hunt to capture
Vedha a smuggler and a murderer. Vedha tries to change Vikram's life which
leads to a conflict.,30657,
58,Your Name.,2016,106,Animation Drama Fantasy,8.4,79,Two strangers find
themselves linked in a bizarre way. When a connection forms will distance
be the only thing to keep them apart?,208863,5020000
59,Dangal,2016,161,Action Biography Drama,8.4,,Former wrestler Mahavir
Singh Phogat and his two wrestler daughters struggle towards glory at the
Commonwealth Games in the face of societal oppression.,163336,12390000
60,Spider-Man: Into the Spider-Verse,2018,117,Animation Action
Adventure,8.4,87,Teen Miles Morales becomes the Spider-Man of his universe
and must join with five spider-powered individuals from other dimensions to
stop a threat for all realities.,400000,190240000
61,Avengers: Endgame,2019,181,Action Adventure Drama,8.4,78,After the
devastating events of Avengers: Infinity War (2018) the universe is in
ruins. With the help of remaining allies the Avengers assemble once more in
order to reverse Thanos' actions and restore balance to the
universe.,874948,858370000
62,Avengers: Infinity War,2018,149,Action Adventure Sci-Fi,8.4,68,The
Avengers and their allies must be willing to sacrifice all in an attempt to
defeat the powerful Thanos before his blitz of devastation and ruin puts an
end to the universe.,877735,678820000
63,Coco I,2017,105,Animation Adventure Drama,8.4,81,Aspiring musician
Miguel confronted with his family's ancestral ban on music enters the Land
of the Dead to find his great-great-grandfather a legendary
singer.,405773,209730000
64,Django Unchained,2012,165,Drama Western,8.4,81,With the help of a German
bounty-hunter a freed slave sets out to rescue his wife from a brutal
plantation-owner in Mississippi.,1388935,162810000
65,The Dark Knight Rises,2012,164,Action Adventure,8.4,78,Eight years after
the Joker's reign of anarchy Batman with the help of the enigmatic Catwoman
is forced from his exile to save Gotham City from the brutal guerrilla
terrorist Bane.,1545023,448140000
66,3 Idiots,2009,170,Comedy Drama,8.4,67,Two friends are searching for
their long lost companion. They revisit their college days and recall the
memories of their friend who inspired them to think differently even as the
rest of the world called them "idiots".,354804,6530000
67,Like Stars on Earth,2007,165,Drama Family,8.4,,An eight-year-old boy is
thought to be a lazy trouble-maker until the new art teacher has the
patience and compassion to discover the real problem behind his struggles
in school.,174528,1220000
68,WALL E,2008,98,Animation Adventure Family,8.4,95,In the distant future a
small waste-collecting robot inadvertently embarks on a space journey that
will ultimately decide the fate of mankind.,1019165,223810000
69,The Lives of Others,2006,137,Drama Mystery Thriller,8.4,89,In 1984 East
Berlin an agent of the secret police conducting surveillance on a writer
and his lover finds himself becoming increasingly absorbed by their
lives.,365313,11290000
70,Oldboy,2003,120,Action Drama Mystery,8.4,77,After being kidnapped and
imprisoned for fifteen years Oh Dae-Su is released only to find that he
must find his captor in five days.,526864,710000
71,Memento,2000,113,Mystery Thriller,8.4,80,A man with short-term memory
loss attempts to track down his wife's murderer.,1144823,25540000
72,Princess Mononoke,1997,134,Animation Action Adventure,8.4,76,On a
journey to find the cure for a Tatarigami's curse Ashitaka finds himself in
the middle of a war between the forest gods and Tatara a mining colony. In
this quest he also meets San the Mononoke Hime.,352513,2380000
73,Once Upon a Time in America,1984,229,Crime Drama,8.4,,A former
Prohibition-era Jewish gangster returns to the Lower East Side of Manhattan
over thirty years later where he once again must confront the ghosts and
regrets of his old life.,318184,5320000
74,Indiana Jones and the Raiders of the Lost Ark,1981,115,Action
Adventure,8.4,85,In 1936 archaeologist and adventurer Indiana Jones is
hired by the U.S. government to find the Ark of the Covenant before Adolf
Hitler's Nazis can obtain its awesome powers.,897322,248160000
75,The Shining,1980,146,Drama Horror,8.4,66,A family heads to an isolated
hotel for the winter where a sinister presence influences the father into
violence while his psychic son sees horrific forebodings from both past and
future.,917316,44020000
76,Apocalypse Now,1979,147,Drama Mystery War,8.4,94,A U.S. Army officer
serving in Vietnam is tasked with assassinating a renegade Special Forces
Colonel who sees himself as a god.,617196,83470000
77,Alien,1979,117,Horror Sci-Fi,8.4,89,After a space merchant vessel
receives an unknown transmission as a distress call one of the crew is
attacked by a mysterious life form and they soon realize that its life
cycle has merely begun.,802900,78900000
78,High and Low,1963,143,Crime Drama Mystery,8.4,,An executive of a shoe
company becomes a victim of extortion when his chauffeur's son is kidnapped
and held for ransom.,36530,
79,Dr. Strangelove or: How I Learned to Stop Worrying and Love the
Bomb,1964,95,Comedy,8.4,97,An insane general triggers a path to nuclear
holocaust that a War Room full of politicians and generals frantically
tries to stop.,457287,280000
80,Witness for the Prosecution,1957,116,Crime Drama Mystery,8.4,,A veteran
British barrister must defend his client in a murder trial that has
surprise after surprise.,111853,8180000
81,Paths of Glory,1957,88,Drama War,8.4,90,After refusing to attack an
enemy position a general accuses the soldiers of cowardice and their
commanding officer must defend them.,181972,
82,Sunset Blvd.,1950,110,Drama Film-Noir,8.4,,A screenwriter develops a
dangerous relationship with a faded film star determined to make a
triumphant return.,205267,
83,The Great Dictator,1940,125,Comedy Drama War,8.4,,Dictator Adenoid
Hynkel tries to expand his empire while a poor Jewish barber tries to avoid
persecution from Hynkel's regime.,206839,290000
84,Chhichhore,2019,143,Comedy Drama,8.3,,A tragic incident forces Anirudh a
middle-aged man to take a trip down memory lane and reminisce his college
days along with his friends who were labelled as losers.,37268,900000
85,1917,2019,119,Drama Thriller War,8.3,78,April 6th 1917. As a regiment
assembles to wage war deep in enemy territory two soldiers are assigned to
race against time and deliver a message that will stop 1600 men from
walking straight into a deadly trap.,460797,159230000
86,Tumbbad,2018,104,Drama Fantasy Horror,8.3,,A mythological story about a
goddess who created the entire universe. The plot revolves around the
consequences when humans build a temple for her first-born.,31444,
87,Drishyam,2013,160,Crime Drama Thriller,8.3,,A man goes to extreme
lengths to save his family from punishment after the family commits an
accidental crime.,35465,
88,The Hunt,2012,115,Drama,8.3,77,A teacher lives a lonely life all the
while struggling over his son's custody. His life slowly gets better as he
finds love and receives good news from his son but his new luck is about to
be brutally shattered by an innocent little lie.,292306,690000
89,A Separation,2011,123,Drama,8.3,95,A married couple are faced with a
difficult decision - to improve the life of their child by moving to
another country or to stay in Iran and look after a deteriorating parent
who has Alzheimer's disease.,225106,7100000
90,Incendies,2010,131,Drama Mystery War,8.3,80,Twins journey to the Middle
East to discover their family history and fulfill their mother's last
wishes.,155335,6860000
91,Dara of Jasenovac,2020,130,Drama War,8.3,,Follows the story of a young
girl named Dara who is sent to a concentration camp in Croatia during World
War 2.,34568,
92,The Father I,2020,97,Drama,8.3,88,A man refuses all assistance from his
daughter as he ages. As he tries to make sense of his changing
circumstances he begins to doubt his loved ones his own mind and even the
fabric of his reality.,59314,
93,My Father and My Son,2005,112,Drama Family,8.3,,The family of a leftwing journalist is torn apart after the military coup of Turkey in
1980.,80887,
94,Inglourious Basterds,2009,153,Adventure Drama War,8.3,69,In Nazioccupied France during World War II a plan to assassinate Nazi leaders by a
group of Jewish U.S. soldiers coincides with a theatre owner's vengeful
plans for the same.,1297579,120540000
95,Eternal Sunshine of the Spotless Mind,2004,108,Drama Romance SciFi,8.3,89,When their relationship turns sour a couple undergoes a medical
procedure to have each other erased from their memories.,927213,34400000
96,Amelie,2001,122,Comedy Romance,8.3,69,Amelie is an innocent and naive
girl in Paris with her own sense of justice. She decides to help those
around her and along the way discovers love.,713537,33229999
97,Snatch,2000,102,Comedy Crime,8.3,55,Unscrupulous boxing promoters
violent bookmakers a Russian gangster incompetent amateur robbers and
supposedly Jewish jewelers fight to track down a priceless stolen
diamond.,794366,30330000
98,Requiem for a Dream,2000,102,Drama,8.3,68,The drug-induced utopias of
four Coney Island people are shattered when their addictions run
deep.,779993,3640000
99,American Beauty,1999,122,Drama,8.3,84,A sexually frustrated suburban
father has a mid-life crisis after becoming infatuated with his daughter's
best friend.,1084775,130100000
100,Dances with Wolves,1990,181,Adventure Drama Western,8.0,72,Lieutenant
John Dunbar assigned to a remote western Civil War outpost befriends wolves
and Indians making him an intolerable aberration in the
military.,245310,184210000
101,Avatar,2009,162,Action Adventure Fantasy,7.8,83,A paraplegic Marine
dispatched to the moon Pandora on a unique mission becomes torn between
following his orders and protecting the world he feels is his
home.,1135001,760510000
102,Goldfinger,1964,110,Action Adventure Thriller,7.7,87,While
investigating a gold magnate's smuggling James Bond uncovers a plot to
contaminate the Fort Knox gold reserve.,176600,51080000
103,E.T. the Extra-Terrestrial,1982,115,Family Sci-Fi,7.8,91,A troubled
child summons the courage to help a friendly alien escape Earth and return
to his home world.,378313,435110000
104,The Conversation,1974,113,Drama Mystery Thriller,7.8,85,A paranoid
secretive surveillance expert has a crisis of conscience when he suspects
that the couple he is spying on will be murdered.,101397,4420000'''
    return file

def write(file,filename):
    with open(filename,'w') as f:
        f.write(file)

def run_user_code():
    yearFrom = int(input())
    yearUpto = int(input())
    genre = input().strip()
    print(highest_grossing(yearFrom,yearUpto,genre))

if __name__ == '__main__':
    file = get_data()
    write(file,'IMDB_reviews.csv')
    run_user_code()