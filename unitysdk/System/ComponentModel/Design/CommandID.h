#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DESIGN_COMMANDID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEB2AD0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMMANDID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEB2B90)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMMANDID_GET_GUID_OFFSET UNITYSDK_OFFSET(0x1DEB2BC0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMMANDID_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DEB2AC0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMMANDID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEB2BD0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMMANDID__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB2AB0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int CommandID_TypeDefinitionIndex = 3033;

	class CommandID : public ::System::Object
	{
	public:
		::System::Guid menuGroup; // 0x10
		::System::Int32 commandID; // 0x20

		::System::Void _ctor(::System::Guid menuGroup, ::System::Int32 commandID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMMANDID__CTOR_OFFSET))(this, menuGroup, commandID);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMMANDID_GET_ID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMMANDID_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMMANDID_GETHASHCODE_OFFSET))(this);
		}

		::System::Guid get_Guid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMMANDID_GET_GUID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMMANDID_TOSTRING_OFFSET))(this);
		}
	};
}
