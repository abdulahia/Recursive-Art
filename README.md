[![Work in Repl.it](https://classroom.github.com/assets/work-in-replit-14baed9a392b3a25080506f3b7b6d57f295ec2978f6f33ec97e36a161684cbe9.svg)](https://classroom.github.com/online_ide?assignment_repo_id=324258&assignment_repo_type=GroupAssignmentRepo)
# [L05: Recursive Art](https://docs.google.com/document/d/1Ty7-La9W8I_k7h6FW1GKGbwDBfmH45OR8sEgPG-sc9w/edit?usp=sharing)

## Use randomness, recursion, and turtles to create art in the style of Piet Mondrian, 

### Starter files have been provided for you in C++

### Author(s):
- Author(s) of primary logic: Emi and Ahmed
- Author of lab and stubs: Jan Pearce, Berea College
- Author of [C-Turtle](https://github.com/walkerje/C-Turtle): Jesse W. Walker
- **Note: If you work in a pair you must also attest to only having worked together as a pair, not separately.**

# Planning Prompts

1. **RECURSION**
*When the steps say “Use Recursion to…”, 
describe exactly what it is telling you to do*

Change the initial rectangle size to smaller sections. For example as mentioned in the google docs, If the region is wider than half the initial canvas size and the region is taller than half the initial canvas height, we would use recursion to split the region into 4 smaller regions. Based on that, we would be creating new mini rectangles within the rectangle whenever we use recursion.  

2. **PARAMETERS** 
*Give some serious thought to what parameters need to be utilized by 
your recursive function. You will basically need to know:*
- where to start to draw the rectangle,
- how wide it should be, 
- how tall it should be, and 
- what color it should be. 
*Using all of this, information, describe the parameters you plan to use.*

Initial regtangular points would be (-400,300) and (-400, 600) width of 800 and height of 600. Red, Green, and Blue. 

3. **BASE CASE** 
*Given the above series of steps uses the recursive method, 
what is the base case? Explain.*

Minimun rectangle width of 20 and height of 10. maximum rectangle width of 40 and height of 20. We created a minimum and maximum size for our base case but we might change based on how we see it when we start coding it. 

4. **RANDOM NUMBER**
*Explain how the recursion minimum and recursion maximum 
just discussed relate to the base case for your recursion.*

When we reach the middle of our  minimum and maximum base case we don't need to create any more mini rectangales or anymore Recursion beyond that point. 

5. **RANDOM NUMBER COMPUTATION**
*Assuming you know the coordinate of your upper left corner and 
the width of your original rectangle. 
Given that the random number generator that I gave you generates a 
random number between 1 and a random max, 
how will you generate an appropriately sized random number and 
how will you use it for your next function call?*

We can have it to where the random size generated would be between a range within close distance to the width. 
you would call in the parameter.

6. **WHITEBOARD DESIGN**
*Write a high level design plan for your program.
You can use screenshots of your work on an actual white board 
or you can use pseudocode.*

Our program will start of with an initial rectangle that is the size of the canvas. Top left will be located at (-400, 300) and the bottom right would be at (-400, 600) with a total width of 800 and height of 600. We will then implement those condition statements mention in the google doc. for example, If the region is wider than half the initial canvas size and the region is taller than half the initial canvas height, we would use recursion to split the region into 4 smaller regions (a vertical split and a horizontal split) with both split locations chosen randomly. Lastly, our colors will be randomized between red, blue, green and white. 


# Implementation and Customization Prompts

7. **SPLITTING**
*How many “units” wide or tall did you consider a 
rectangle too small to split?*

 We decided to go with 70 for the height and 55 for the width. We decided this was a good number to split the rectangles. It looked a lot better this way as the final product.  

8. **NUMBER CALLS**
*While filling out the above rectangle in the Mondrian’s style 
using the series of steps above, 
is there anything you noticed that will change how many times the 
recursive function gets called?*

The number of calls is affected depending on how many times we actually call it. The mondrian function holds this recursive function and if we call that 2 times in a base case it wont do what we want it to do. We had to call it 4 times for it to do what we needed it to do. We needed to split into 4. 

9. **EXTRA STEPS**
*Most design choices have advantages as well as disadvantages. 
Given the above series of steps, 
are there any steps you felt were unnecessary given what other steps perform?*

We felt that within our code we didnt feel we had extra and unnecessary code. Our code had a good amount of lines and eveything within it was neccessary. 

10. **DISADVANTAGE**
*Describe and explain at least one disadvantage of using recursion to 
generate Mondrian art.*

It is definetly a hard conecpt to understand. We needed to make sure step by step on what we needed to do. Our disadvantage is that we spent to little time trying to understand the actual concept and tried to rush through it. 

11. **REQUIRED CUSTOMIZATIONS**
*What customizations did you make Mondrian art, and why did you choose it.*

We went with a light green, cyan, aqua marine and blue. We made it to where the rectangles were drawn across the rectangle and we set them at the points. 

12. **PROCESS SUMMARY**
*Briefly summarize your design and implementation process, 
including how much your initial design plan evolved, 
the final results you achieved, and the amount of time you spent 
as a programmer or programmers in accomplishing these results. 
This should be one or at most two paragraphs.*

Our initial design plan didnt have a lot of thinking as we thought we needed. We took a step back to understand exactly what we needed to do. We got some help understanding the topic from several T.A's. We needed to draw a rectangle and split that up into sections and from there we needed to have rectangles split up into those sections. Base cases were already provided in the google doc as well. We managed to focus mainly on getting it to work and then we decided to do color last.   

13. **DESIGN CHALLENGES**
*Describe the primary conceptual challenges that you encountered 
in trying to complete this lab and what might have made the 
lab easier for you.*

This lab was a hard one. It was the concept that kept holding us back. We got a better understanding of recursion because of this lab as well. We got a good understanding when we were helped to understand the google doc if statements. It was worded very weird and it was hard to understand at some points but when we were clarified on this it was much more understable and managed to understand the concept. We had some trouble as well as replit. 

14. **BIG O ANALYSIS**
*Please analyze the Big O of all of the methods of the MondrianArt class, 
including constructors. 
Hint: Given the random nature of this lab, 
be sure you write about the worst case.*

draw_rectangle(): It is O(1). It remains constant throughout. It draws the rectangle and contains the points as well. 

Mondrian(): It is O(n). It has to go through multiple steps and it holds all the base cases/ conditionals. This has to check and take mulitple steps making it O(n).

15. **TESTING**
*Please briefly describe your testing process. 
Here you should be careful to select representative input cases, 
including both representative typical cases as well as extreme cases.*

We would switch the height and width of the base case to 60 and then to 160. We saw when the number was less it would take way longer to render then if we switched it with a higher number. We decided on 70 for the height and 55 for the width. 

16. **ERRORS**
*List in bulleted form of all known errors 
and deficiencies with a very brief explanation.*

- Replit error - It would run wihtout any errors but it would not draw. We downloaded visual studios and worked on there to work around this issue. 
- Core dumped - We were trying to access something that didnt belong to us
- syntax errors - we sometimes spent time trying to find missing brackets and spelling errors. 

17. **LEARNING AND REACTION**
*A paragraph or so of your own comments 
on what you learned and your reactions to this lab.*

Ahmed - I was suprised on how easy I found the lab to be. Once I understoon how it worked, it was matter of just using logic to figure some of the things out, for example, our turtle was only drawing on the left side after it spilitted into two. Well, that was because we never moved points A and D when we were calling for our second vertical split and same for our horizontal split, we were only moving points A and B and never D and C. It was the most enjoyible lab for me and I gained a lot on how recursion works.

Emi- The concept of recursion was a lot harder than the lab itself. We understood the concept after we spent some time being explained on what we were looking for. Once we knew what we needed to do it was a lot simpler to understand. I  thought this lab wasn't the hardest one to code but the harder lab to understand. 
 
18. **INTEGRITY STATEMENT**
*Please briefly describe ALL help you received and 
all help you gave to others in completing this lab.
Also list all other references below.* 
**If you worked in a pair you must also attested to only 
having worked together as a pair, not separately.**

Ahmed and Emi 
Imma 
Azis
Bryar

## References:
- This repo contains code by Jan Pearce and Jesse Walker as described above.
- The linked lab heavily leverage nifty.stanford.edu/2018/stephenson-mondrian-art/

