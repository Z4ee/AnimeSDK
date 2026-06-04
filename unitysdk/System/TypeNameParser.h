#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }

#define SYSTEM_TYPENAMEPARSER_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1864DA20)

namespace System
{
	inline static constexpr unsigned int TypeNameParser_TypeDefinitionIndex = 374;

	class TypeNameParser : public ::System::Object
	{
	public:
		static ::System::Type* GetType(::System::String* a1, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* a2, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Threading::StackCrawlMark& a6)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMEPARSER_GETTYPE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
