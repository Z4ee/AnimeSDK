#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/GetMemberBinder.h"

namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Dynamic { class InvokeMemberBinder; }

#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_GETBINDERADAPTER_FALLBACKGETMEMBER_OFFSET UNITYSDK_OFFSET(0x1F6883B0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_GETBINDERADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F688380)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicObject_MetaDynamic_GetBinderAdapter_TypeDefinitionIndex = 4982;

	class DynamicObject_MetaDynamic_GetBinderAdapter : public ::System::Dynamic::GetMemberBinder
	{
	public:
		::System::Void _ctor(::System::Dynamic::InvokeMemberBinder* binder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Dynamic::InvokeMemberBinder*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_GETBINDERADAPTER__CTOR_OFFSET))(this, binder);
		}

		::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* errorSuggestion)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_GETBINDERADAPTER_FALLBACKGETMEMBER_OFFSET))(this, target, errorSuggestion);
		}
	};
}
