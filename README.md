 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\<"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# An Adventurer's Journey (Game)
 > Your author list below should include links to all members GitHub and should begin with a "\<" (remove existing author).
 
 > Authors: [Auberon Lai](https://github.com/alai031),
 [Briana Ortega](https://github.com/briortega),
 [Brent Sakihara](https://github.com/brent-sakihara)
 
 > You will be forming a group of **THREE** students and work on an interesting project that you will propose yourself (in this `README.md` document). You can pick any project that you'd like, but it needs to implement three design patterns. Each of the members in a group is expected to work on at least one design pattern and its test cases. You can, of course, help each other, but it needs to be clear who will be responsible for which pattern and for which general project features.
 
 > ## Expectations
 > * Incorporate **three** distinct design patterns, *two* of the design patterns need to be taught in this course:
 >   * Composite, Strategy, Abstract Factory, Visitor
 > * All three design patterns need to be linked together (it can't be three distinct projects)
 > * Your project should be implemented in C/C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.

## Project Description
> * General description of project: **Our project is a game that interacts with the user through the command line. It follows the adventurer (aka the user) who encounters several different events on their path to treasure. Based on their selection of one of three paths, they are presented with a random event that affects the adventurer in a certain way (decreases/increases health points, attack, and defense stats, makes them fight an enemy, etc). The game ends either with the adventurer succeeding in obtaining the treasure or being defeated.**

 > Your project description should summarize the project you are proposing. Be sure to include
 > * Why is it important or interesting to you?
 > * **It is interesting to us because it entails multiple classes of characters compiled into a game that operates on different events that the adventurer encounters. Also, this project allows plenty of room for being creative with the adventurer's situations / storyline.**
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 > #### [C++] (link)- a high level programming language taught at UCR
 >  #### [Vim] (link)- a command line editor also taught at UCR
 >   #### [Visual Studio Code] (link) - a very popular text editor
 > * What will be the input/output of your project?
 > #### The input of the project will be based upon the variety of "events" that occur through user prompt. The output will correspond to the input entered and the program will react appropriately, displaying text about the events that occur based on what the user selects.
 > * What are the three design patterns you will be using. For each design pattern you must:
 >   * Explain in 3 - 5 sentences why you picked this pattern and what feature you will implement with it
 > #### Composite - We will use the composite design pattern to make an abstract class for the events the adventurer will encounter. The events will each be the end of the path (primitive) or composites that will create more events (such as a longer path or more enemies, etc). The composite pattern will be great since the project consists of many events that we can represent as objects in a part-whole hierarchy and the composite events can recursively make more events for the adventurer to encounter.
 > #### Singleton - This pattern was picked because its applicability is relevant to our project as there are times when we may only want one instance of a class. Some features of the project that we could implement the design pattern with include wanting only one creation of an adventurer person object or one instance of a replenishing fountain that restores one to full health points but disappears once used. Other features may include having a class (weapon) with derived classes (sword and dagger) where the user can wield those weapons until they break and become unrepairable. We may also have unique bosses and enemies that only have a one time appearance, like a final boss.
 >**Strategy - We will use this pattern to create the abstract class for the different type of adventurers that the player can choose from. This pattern is useful because it allows for us to create characters with diverse starting levels as well as setting how much damage can be received before they die and having a special weapon for each character to use against the enemy. It also allows for us to have diverse levels of the journey instead of just one. For instance, if your character has a low starting health then possibly they can take more damage before their health goes down or have a stronger weapon assigned to do more damage to the enemy.**

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 <img src = "https://github.com/cs100/final-project-alai031-borte012-bsaki001/blob/master/UML%20class.png" width = "1000"/>
 
 >**The composite strategy uses the Events class as its abstract class, Monster class as its composite, and Trap class as its leaf. The event class takes an instance of the Adventurer class so that it can call proper methods such as incrementing or decrementing health once the methods such as damage and bonus are called. Monster class also includes the method void callBackup() which is called once the int turnsTillBackup goes to 0. This creates another instance of the monster class if the monster is still alive (hp is not at zero).**
 
 >**The singleton strategy is implemented in our class diagram and is represented by the Game class. We only want one instance of the Game class to be created. To ensure this, we allow clients to access the Game class exclusively through the static Instance member function and make the constructor protected instead of public.  The protected constructor makes it so that a client that tries to instantiate the Game class directly will receive an error at compile-time.**
 
 >**The strategy pattern is used in the Adventurer class. It allows the player to choose its character for the journey. They get the option of being the mage, the knight or the hunter. Each character has a different XP, health, damage, and strength starting levels as well as a specific weapon. Depending on the character chosen each event encountered will affect them differently. The journey will continue until the adventurer’s health is zero or until all enemies in the journey are defeated.**
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 > 
 Story 1 : 
 <img src = "https://github.com/cs100/final-project-alai031-borte012-bsaki001/blob/master/story1.png" width = "1000"/>
 Story 2:
 <img src = "https://github.com/cs100/final-project-alai031-borte012-bsaki001/blob/master/outputstory2(5).png" width = "1000"/>
 <img src = "https://github.com/cs100/final-project-alai031-borte012-bsaki001/blob/master/outputstory2.png" width = "1000"/>
 <img src = "https://github.com/cs100/final-project-alai031-borte012-bsaki001/blob/master/outputstory2(1).png" width = "1000"/>
 <img src = "https://github.com/cs100/final-project-alai031-borte012-bsaki001/blob/master/outputstory2(2).png" width = "1000"/>
 <img src = "https://github.com/cs100/final-project-alai031-borte012-bsaki001/blob/master/outputstory2(3).png" width = "1000"/>
 <img src = "https://github.com/cs100/final-project-alai031-borte012-bsaki001/blob/master/outputstory2(4).png" width = "1000"/>
 Story 3: 
  <img src = "https://github.com/cs100/final-project-alai031-borte012-bsaki001/blob/master/story3(1).png" width = "1000"/>
  <img src = "https://github.com/cs100/final-project-alai031-borte012-bsaki001/blob/master/story3(2).png" width = "1000"/>
  <img src = "https://github.com/cs100/final-project-alai031-borte012-bsaki001/blob/master/story3(3).png" width = "1000"/>
 ## Installation/Usage
 > Instructions on installing and running your application
 >
 The application is run on command line so there aren't additional dependencies other than including all the necessary files. Basic inclusion of the story components that were used are shown on the OMT diagram. Make sure the user inputs a valid number. Only local copies are available so use this repo by git cloning it and running cmake to create the executable. Then once the executable is run, the application will start.
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 >
 We thoroughly tested each of the individual component within the OMT diagram (using unit testing/google test) before combining it into the story files. Story files were tested through the output statements that could show different minor errors.
 
