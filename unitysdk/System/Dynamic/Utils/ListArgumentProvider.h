#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/Utils/ListProvider_1.h"

namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class IArgumentProvider; }

#define SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x1E588F10)
#define SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_GET_ELEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E588E30)
#define SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x1E588E20)
#define SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E588E00)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ListArgumentProvider_TypeDefinitionIndex = 5019;

	class ListArgumentProvider : public ::System::Dynamic::Utils::ListProvider_1<::System::Linq::Expressions::Expression*>
	{
	public:
		::System::Linq::Expressions::IArgumentProvider* _provider; // 0x10
		::System::Linq::Expressions::Expression* _arg0; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::IArgumentProvider* provider, ::System::Linq::Expressions::Expression* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::IArgumentProvider*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER__CTOR_OFFSET))(this, provider, arg0);
		}

		::System::Linq::Expressions::Expression* get_First()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_GET_FIRST_OFFSET))(this);
		}

		::System::Int32 get_ElementCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_GET_ELEMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetElement(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_GETELEMENT_OFFSET))(this, index);
		}
	};
}
