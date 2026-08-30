#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/ComponentModel/EditorBrowsableState.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB09070)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB090D0)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB09060)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EditorBrowsableAttribute_TypeDefinitionIndex = 2589;

	class EditorBrowsableAttribute : public ::System::Attribute
	{
	public:
		::System::ComponentModel::EditorBrowsableState browsableState; // 0x10

		::System::Void _ctor(::System::ComponentModel::EditorBrowsableState a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::EditorBrowsableState))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
