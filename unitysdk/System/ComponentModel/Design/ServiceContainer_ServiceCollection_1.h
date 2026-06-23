#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

namespace System { class Type; }
namespace System::ComponentModel::Design { template <typename T> class ServiceContainer_ServiceCollection_1_EmbeddedTypeAwareTypeComparer; }

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ServiceContainer_ServiceCollection_1_TypeDefinitionIndex = 3090;

	template <typename T>
	class ServiceContainer_ServiceCollection_1 : public ::System::Collections::Generic::Dictionary_2<::System::Type*, T>
	{
	public:
		static ::System::ComponentModel::Design::ServiceContainer_ServiceCollection_1_EmbeddedTypeAwareTypeComparer<T>** StaticGet_serviceTypeComparer()
		{
			return (::System::ComponentModel::Design::ServiceContainer_ServiceCollection_1_EmbeddedTypeAwareTypeComparer<T>**)Il2CppClass::FromTypeDefinitionIndex(ServiceContainer_ServiceCollection_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
