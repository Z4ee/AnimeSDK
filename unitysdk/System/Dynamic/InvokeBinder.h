#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObjectBinder.h"

namespace System::Dynamic { class DynamicMetaObject; }

#define SYSTEM_DYNAMIC_INVOKEBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1BF37560)
#define SYSTEM_DYNAMIC_INVOKEBINDER_FALLBACKINVOKE_OFFSET UNITYSDK_OFFSET(0x1BF37540)

namespace System::Dynamic
{
	inline static constexpr unsigned int InvokeBinder_TypeDefinitionIndex = 5006;

	class InvokeBinder : public ::System::Dynamic::DynamicMetaObjectBinder
	{
	public:
		::System::Dynamic::DynamicMetaObject* FallbackInvoke(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEBINDER_FALLBACKINVOKE_OFFSET))(this, target, args);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEBINDER_BIND_OFFSET))(this, target, args);
		}
	};
}
