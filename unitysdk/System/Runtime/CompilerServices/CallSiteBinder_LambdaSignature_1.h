#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Runtime::CompilerServices { template <typename T> class CallSiteBinder_LambdaSignature_1; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallSiteBinder_LambdaSignature_1_TypeDefinitionIndex = 4955;

	template <typename T>
	class CallSiteBinder_LambdaSignature_1 : public ::System::Object
	{
	public:
		static ::System::Runtime::CompilerServices::CallSiteBinder_LambdaSignature_1<T>** StaticGet_s_instance()
		{
			return (::System::Runtime::CompilerServices::CallSiteBinder_LambdaSignature_1<T>**)Il2CppClass::FromTypeDefinitionIndex(CallSiteBinder_LambdaSignature_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* Parameters; // 0x0
		::System::Linq::Expressions::LabelTarget* ReturnLabel; // 0x0
	};
}
