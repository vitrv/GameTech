James Crabtree
Laura Catano
Jordan Luna


We changed our overall game design from a soccer game to pinball because it seemed like a more interesting concept.
This doesn't mean much for our overall implementation, but there are some changes that we need to account for. 
Once change is that that we need to update score when the ball collides with a 
non-paddle object. Another thing to keep in mind is that the ball must always stay on the ground.  
Switching to pinball removes the need for free camera controls and the "force gun" of our previous plan.
We plan to stick with the 3 lives concept of the last game and make it so the player gets three balls, one 
dropping each time a ball gets past the paddles.  Once three balls have passed the paddles, a game over screen
displays.

Physics: We are behind on getting physics working so we were unable to make a working demo.  We were having
 	trouble understanding how to link the movement of the entity and the rigidbody. We plan to meet again tomorrow
 	to figure this out and get a running game. We may play with OgreBullet to see if that yields any better results
Level/Character Controls: We have made a room with working paddles.  All that needs to be done is to add obstacles 
	with collision that light up and play a sound when they are hit.
Sound: sound atttached to the button presses that control them. This is basically fully functioning,
 	we just need to add the triggers
GUI: We couldn't start as a result of CEGUI not working on the lab machines
Camera: completely done using cameraman


Run Instructions
----------------
type ./buildit in the commandline and then run the assignment2 executable

Controls
--------
Esc: quit
move mouse: look
z: left paddle
c: right paddle
