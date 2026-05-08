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

#define SYSTEM_TYPENAMEPARSER_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1A3BC820)
#define SYSTEM_TYPENAMEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3BC860)

namespace System
{
	inline static constexpr unsigned int TypeNameParser_TypeDefinitionIndex = 363;

	class TypeNameParser : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMEPARSER__CTOR_OFFSET))(this);
		}

		static ::System::Type* GetType(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver, ::System::Boolean throwOnError, ::System::Boolean ignoreCase, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMEPARSER_GETTYPE_OFFSET))(typeName, assemblyResolver, typeResolver, throwOnError, ignoreCase, stackMark);
		}
	};
}
