/* 

                          Firewall Builder

                 Copyright (C) 2000 NetCitadel, LLC

  Author:  Vadim Kurland     vadim@vk.crocodile.org

  $Id: IPv4.h 975 2006-09-10 22:40:37Z vkurland $


  This program is free software which we release under the GNU General Public
  License. You may redistribute and/or modify this program under the terms
  of that license as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 
  To get a copy of the GNU General Public License, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/

#ifndef __IPV4_HH_FLAG__
#define __IPV4_HH_FLAG__

#include <string>

#include <fwbuilder/Address.h>
#include <fwbuilder/FWException.h>

namespace libfwbuilder
{

class IPv4 : public Address
{
private:
    
public:
    
    IPv4();
    IPv4(const FWObject *root,bool prepopulate);

    virtual ~IPv4();

    virtual void fromXML(xmlNodePtr parent) throw(FWException);
    virtual xmlNodePtr toXML(xmlNodePtr xml_parent_node) throw(FWException);

    virtual unsigned int dimension()  const { return 1; }
    
    DECLARE_FWOBJECT_SUBTYPE(IPv4);

};

}

#endif


