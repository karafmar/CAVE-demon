/*!
 * @file   inputType.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 16. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */
#ifndef INPUTTYPE_H
#define	INPUTTYPE_H

/**Contains all known types of input.*/
enum class inputType {
    BUTTON, REL_AXIS, ABS_AXIS
    //add trackers in future
};

#endif	/* INPUTTYPE_H */

