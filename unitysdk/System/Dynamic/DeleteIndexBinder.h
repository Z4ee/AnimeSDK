#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObjectBinder.h"

namespace System::Dynamic { class DynamicMetaObject; }

#define SYSTEM_DYNAMIC_DELETEINDEXBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1F0753B0)
#define SYSTEM_DYNAMIC_DELETEINDEXBINDER_FALLBACKDELETEINDEX_OFFSET UNITYSDK_OFFSET(0x1F075480)

namespace System::Dynamic
{
	inline static constexpr unsigned int DeleteIndexBinder_TypeDefinitionIndex = 4975;

	class DeleteIndexBinder : public ::System::Dynamic::DynamicMetaObjectBinder
	{
	public:
		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DELETEINDEXBINDER_BIND_OFFSET))(this, target, args);
		}

		::System::Dynamic::DynamicMetaObject* FallbackDeleteIndex(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* indexes)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DELETEINDEXBINDER_FALLBACKDELETEINDEX_OFFSET))(this, target, indexes);
		}
	};
}
