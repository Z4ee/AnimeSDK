#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }
namespace System::Runtime::CompilerServices { template <typename T> class CallSiteBinder_LambdaSignature_1; }
namespace System::Runtime::CompilerServices { template <typename T> class CallSite_1; }
namespace System::Runtime::CompilerServices { template <typename T> class RuleCache_1; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBE2640)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE2630)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallSiteBinder_TypeDefinitionIndex = 4955;

	class CallSiteBinder : public ::System::Object
	{
	public:
		static ::System::Linq::Expressions::LabelTarget** StaticGet__UpdateLabel_k__BackingField()
		{
			return (::System::Linq::Expressions::LabelTarget**)Il2CppClass::FromTypeDefinitionIndex(CallSiteBinder_TypeDefinitionIndex)->GetStaticField(0x3BB0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* Cache; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER__CCTOR_OFFSET))();
		}
	};
}
