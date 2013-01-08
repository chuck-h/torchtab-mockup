// torch table mockup
/******* useful constants ********/
mmPerIn = 25.4;
#define MATL_THICKNESS 1.5 // 1.5mm = 16 gauge steel
/******** design parameters ******/
// side rails
// 1/5th pitch timing belt, 15 tooth pulleys (~1 in dia over belt)
x_drive_center_dist = 16.5*mmPerIn;
side_rail_lip_width = 2*mmPerIn;
side_rail_length = x_drive_center_dist+5*mmPerIn;
side_rail_top_width = 4*mmPerIn;

// end plate
endplate_span = 20*mmPerIn;
top_plate_height = 5*mmPerIn;
leg_width = 1.5*mmPerIn;
endplate_upper_lip = 0.75*mmPerIn;

