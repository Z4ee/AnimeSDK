#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/Utils/ListProvider_1.h"

namespace System::Linq::Expressions { class IParameterProvider; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_DYNAMIC_UTILS_LISTPARAMETERPROVIDER_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x1DC4D940)
#define SYSTEM_DYNAMIC_UTILS_LISTPARAMETERPROVIDER_GET_ELEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DC4D860)
#define SYSTEM_DYNAMIC_UTILS_LISTPARAMETERPROVIDER_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x1DC4D850)
#define SYSTEM_DYNAMIC_UTILS_LISTPARAMETERPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4D830)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ListParameterProvider_TypeDefinitionIndex = 5020;

	class ListParameterProvider : public ::System::Dynamic::Utils::ListProvider_1<::System::Linq::Expressions::ParameterExpression*>
	{
	public:
		::System::Linq::Expressions::IParameterProvider* _provider; // 0x10
		::System::Linq::Expressions::ParameterExpression* _arg0; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::IParameterProvider* provider, ::System::Linq::Expressions::ParameterExpression* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::IParameterProvider*, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPARAMETERPROVIDER__CTOR_OFFSET))(this, provider, arg0);
		}

		::System::Linq::Expressions::ParameterExpression* get_First()
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPARAMETERPROVIDER_GET_FIRST_OFFSET))(this);
		}

		::System::Int32 get_ElementCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPARAMETERPROVIDER_GET_ELEMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::ParameterExpression* GetElement(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPARAMETERPROVIDER_GETELEMENT_OFFSET))(this, index);
		}
	};
}
