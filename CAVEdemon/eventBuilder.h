/*!
 * @file   eventBuilder.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 16. 4. 2014	
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 */
#ifndef EVENTBUILDER_H
#define	EVENTBUILDER_H

#include "eventMessageNewDevice.h"
#include "eventMessageDataUpdate.h"
#include "eventMessageFeedback.h"
#include "eventMessageNotice.h"
#include <memory> 

/**
 * Class with static methods for building messages.
 */
class eventBuilder {
public:
    eventBuilder();
    virtual ~eventBuilder();
    
    static std::shared_ptr<eventMessageNotice> buildEventMessageNotice();
    static std::shared_ptr<eventMessageNewDevice> buildEventMessageNewDevice();
    static std::shared_ptr<eventMessageFeedback> buildEventMessageFeedback();
    static std::shared_ptr<eventMessageDataUpdate> buildEventMessageDataUpdate();

private:

};

#endif	/* EVENTBUILDER_H */

