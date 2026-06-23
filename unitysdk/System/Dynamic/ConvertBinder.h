#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObjectBinder.h"

namespace System::Dynamic { class DynamicMetaObject; }

#define SYSTEM_DYNAMIC_CONVERTBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1DF2A260)
#define SYSTEM_DYNAMIC_CONVERTBINDER_FALLBACKCONVERT_OFFSET UNITYSDK_OFFSET(0x1DF2A240)

namespace System::Dynamic
{
	inline static constexpr unsigned int ConvertBinder_TypeDefinitionIndex = 4973;

	class ConvertBinder : public ::System::Dynamic::DynamicMetaObjectBinder
	{
	public:
		::System::Dynamic::DynamicMetaObject* FallbackConvert(::System::Dynamic::DynamicMetaObject* target)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CONVERTBINDER_FALLBACKCONVERT_OFFSET))(this, target);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CONVERTBINDER_BIND_OFFSET))(this, target, args);
		}
	};
}
