#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Dynamic::Utils { template <typename T1, typename T2> class CacheDict_2; }
namespace System::Runtime::CompilerServices { class CallSiteBinder; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F5A2090)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5A2620)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A2080)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallSite_TypeDefinitionIndex = 4952;

	class CallSite : public ::System::Object
	{
	public:
		static ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_2<::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Runtime::CompilerServices::CallSite*>*>** StaticGet_s_siteCtors()
		{
			return (::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_2<::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Runtime::CompilerServices::CallSite*>*>**)Il2CppClass::FromTypeDefinitionIndex(CallSite_TypeDefinitionIndex)->GetStaticField(0x4320);
		}
		::System::Runtime::CompilerServices::CallSiteBinder* _binder; // 0x10
		::System::Boolean _match; // 0x18

		::System::Void _ctor(::System::Runtime::CompilerServices::CallSiteBinder* binder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::CallSiteBinder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE__CTOR_OFFSET))(this, binder);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE__CTOR_1_OFFSET))(this);
		}

		static ::System::Runtime::CompilerServices::CallSite* Create(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder)
		{
			return ((::System::Runtime::CompilerServices::CallSite*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE_CREATE_OFFSET))(delegateType, binder);
		}
	};
}
