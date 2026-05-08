#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }

#define SYSTEM_COMPONENTMODEL_INSTANCECREATIONEDITOR_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B1E4C70)
#define SYSTEM_COMPONENTMODEL_INSTANCECREATIONEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E4CB0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int InstanceCreationEditor_TypeDefinitionIndex = 2917;

	class InstanceCreationEditor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTANCECREATIONEDITOR__CTOR_OFFSET))(this);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTANCECREATIONEDITOR_GET_TEXT_OFFSET))(this);
		}
	};
}
