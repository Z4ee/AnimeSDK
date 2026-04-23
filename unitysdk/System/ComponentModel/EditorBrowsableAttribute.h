#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/ComponentModel/EditorBrowsableState.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0C10D0)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0C1130)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C10C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EditorBrowsableAttribute_TypeDefinitionIndex = 2578;

	class EditorBrowsableAttribute : public ::System::Attribute
	{
	public:
		::System::ComponentModel::EditorBrowsableState browsableState; // 0x10

		::System::Void _ctor(::System::ComponentModel::EditorBrowsableState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::EditorBrowsableState))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE__CTOR_OFFSET))(this, state);
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
