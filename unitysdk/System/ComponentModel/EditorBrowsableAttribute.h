#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/ComponentModel/EditorBrowsableState.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B3E90C0)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B3E9120)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1B3E90B0)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B3E90A0)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E9090)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EditorBrowsableAttribute_TypeDefinitionIndex = 2874;

	class EditorBrowsableAttribute : public ::System::Attribute
	{
	public:
		::System::ComponentModel::EditorBrowsableState browsableState; // 0x10

		::System::Void _ctor(::System::ComponentModel::EditorBrowsableState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::EditorBrowsableState))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE__CTOR_OFFSET))(this, state);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE__CTOR_1_OFFSET))(this);
		}

		::System::ComponentModel::EditorBrowsableState get_State()
		{
			return ((::System::ComponentModel::EditorBrowsableState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GET_STATE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
