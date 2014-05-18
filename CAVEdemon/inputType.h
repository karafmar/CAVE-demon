/*!
 * @file   inputType.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 16. 4. 2014	
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 */
#ifndef INPUTTYPE_H
#define	INPUTTYPE_H

/**Contains all known types of input.*/
enum class inputType {
    BUTTON, REL_AXIS, ABS_AXIS
    //add trackers in future
};

#endif	/* INPUTTYPE_H */

