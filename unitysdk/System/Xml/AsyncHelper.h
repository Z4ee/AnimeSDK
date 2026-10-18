#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_XML_ASYNCHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE91E50)

namespace System::Xml
{
	inline static constexpr unsigned int AsyncHelper_TypeDefinitionIndex = 1786;

	class AsyncHelper : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::Task** StaticGet_DoneTask()
		{
			return (::System::Threading::Tasks::Task**)Il2CppClass::FromTypeDefinitionIndex(AsyncHelper_TypeDefinitionIndex)->GetStaticField(0x1F950);
		}
		static ::System::Threading::Tasks::Task_1<::System::Boolean>** StaticGet_DoneTaskFalse()
		{
			return (::System::Threading::Tasks::Task_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AsyncHelper_TypeDefinitionIndex)->GetStaticField(0x1F958);
		}
		static ::System::Threading::Tasks::Task_1<::System::Boolean>** StaticGet_DoneTaskTrue()
		{
			return (::System::Threading::Tasks::Task_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AsyncHelper_TypeDefinitionIndex)->GetStaticField(0x1F960);
		}
		static ::System::Threading::Tasks::Task_1<::System::Int32>** StaticGet_DoneTaskZero()
		{
			return (::System::Threading::Tasks::Task_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AsyncHelper_TypeDefinitionIndex)->GetStaticField(0x1F968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_ASYNCHELPER__CCTOR_OFFSET))();
		}
	};
}
