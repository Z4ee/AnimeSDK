#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObjectBinder.h"

namespace System::Dynamic { class DynamicMetaObject; }

#define SYSTEM_DYNAMIC_SETINDEXBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1EEEC820)
#define SYSTEM_DYNAMIC_SETINDEXBINDER_FALLBACKSETINDEX_OFFSET UNITYSDK_OFFSET(0x1EEECAC0)

namespace System::Dynamic
{
	inline static constexpr unsigned int SetIndexBinder_TypeDefinitionIndex = 5007;

	class SetIndexBinder : public ::System::Dynamic::DynamicMetaObjectBinder
	{
	public:
		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETINDEXBINDER_BIND_OFFSET))(this, target, args);
		}

		::System::Dynamic::DynamicMetaObject* FallbackSetIndex(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* indexes, ::System::Dynamic::DynamicMetaObject* value)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETINDEXBINDER_FALLBACKSETINDEX_OFFSET))(this, target, indexes, value);
		}
	};
}
