#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class String; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel::Design { class CommandID; }

#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_ADD_COMMANDCHANGED_OFFSET UNITYSDK_OFFSET(0x1CAEC340)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_CHECKED_OFFSET UNITYSDK_OFFSET(0x1CAEBFF0)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_COMMANDID_OFFSET UNITYSDK_OFFSET(0x1CAEC420)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1CAEC120)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_OLESTATUS_OFFSET UNITYSDK_OFFSET(0x1CAEC570)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1CAEC1C0)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_SUPPORTED_OFFSET UNITYSDK_OFFSET(0x1CAEC210)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1CAEC2A0)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_INVOKE_1_OFFSET UNITYSDK_OFFSET(0x1CAEC560)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CAEC430)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_ONCOMMANDCHANGED_OFFSET UNITYSDK_OFFSET(0x1CAEC580)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_REMOVE_COMMANDCHANGED_OFFSET UNITYSDK_OFFSET(0x1CAEC3B0)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_SETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CAEC090)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_SET_CHECKED_OFFSET UNITYSDK_OFFSET(0x1CAEC000)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1CAEC130)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_SET_SUPPORTED_OFFSET UNITYSDK_OFFSET(0x1CAEC220)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1CAEC2B0)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CAEC5A0)
#define SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAEBFE0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int MenuCommand_TypeDefinitionIndex = 3086;

	class MenuCommand : public ::System::Object
	{
	public:
		// static const ::System::Int32 ENABLED = 0x2; // 0x0
		// static const ::System::Int32 INVISIBLE = 0x10; // 0x0
		// static const ::System::Int32 CHECKED = 0x4; // 0x0
		// static const ::System::Int32 SUPPORTED = 0x1; // 0x0
		::System::EventHandler* statusHandler; // 0x10
		::System::ComponentModel::Design::CommandID* commandID; // 0x18
		::System::Collections::IDictionary* properties; // 0x20
		::System::EventHandler* execHandler; // 0x28
		::System::Int32 status; // 0x30

		::System::Void _ctor(::System::EventHandler* handler, ::System::ComponentModel::Design::CommandID* command)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*, ::System::ComponentModel::Design::CommandID*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND__CTOR_OFFSET))(this, handler, command);
		}

		::System::Boolean get_Checked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_CHECKED_OFFSET))(this);
		}

		::System::Void set_Checked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_SET_CHECKED_OFFSET))(this, value);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Void SetStatus(::System::Int32 mask, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_SETSTATUS_OFFSET))(this, mask, value);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Boolean get_Supported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_SUPPORTED_OFFSET))(this);
		}

		::System::Void set_Supported(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_SET_SUPPORTED_OFFSET))(this, value);
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_Visible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_SET_VISIBLE_OFFSET))(this, value);
		}

		::System::Void add_CommandChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_ADD_COMMANDCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_CommandChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_REMOVE_COMMANDCHANGED_OFFSET))(this, value);
		}

		::System::ComponentModel::Design::CommandID* get_CommandID()
		{
			return ((::System::ComponentModel::Design::CommandID*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_COMMANDID_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_INVOKE_OFFSET))(this);
		}

		::System::Void Invoke_1(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_INVOKE_1_OFFSET))(this, arg);
		}

		::System::Int32 get_OleStatus()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_GET_OLESTATUS_OFFSET))(this);
		}

		::System::Void OnCommandChanged(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_ONCOMMANDCHANGED_OFFSET))(this, e);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_MENUCOMMAND_TOSTRING_OFFSET))(this);
		}
	};
}
