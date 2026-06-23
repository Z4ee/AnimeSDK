#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Design/MenuCommand.h"

namespace System { class EventHandler; }
namespace System { class String; }
namespace System::ComponentModel::Design { class CommandID; }

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERB_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C06EE00)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERB_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C06F080)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERB_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C06EF40)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C06F1C0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C06EBE0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06E980)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesignerVerb_TypeDefinitionIndex = 3050;

	class DesignerVerb : public ::System::ComponentModel::Design::MenuCommand
	{
	public:
		::System::Void _ctor(::System::String* text, ::System::EventHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERB__CTOR_OFFSET))(this, text, handler);
		}

		::System::Void _ctor_1(::System::String* text, ::System::EventHandler* handler, ::System::ComponentModel::Design::CommandID* startCommandID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::EventHandler*, ::System::ComponentModel::Design::CommandID*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERB__CTOR_1_OFFSET))(this, text, handler, startCommandID);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERB_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERB_SET_DESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERB_GET_TEXT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERB_TOSTRING_OFFSET))(this);
		}
	};
}
