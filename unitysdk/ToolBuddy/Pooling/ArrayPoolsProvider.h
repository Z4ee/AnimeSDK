#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ToolBuddy::Pooling::Pools { template <typename T> class ArrayPool_1; }

#define TOOLBUDDY_POOLING_ARRAYPOOLSPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C557580)
#define TOOLBUDDY_POOLING_ARRAYPOOLSPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C557570)

namespace ToolBuddy::Pooling
{
	inline static constexpr unsigned int ArrayPoolsProvider_TypeDefinitionIndex = 24783;

	class ArrayPoolsProvider : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_lockObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ArrayPoolsProvider_TypeDefinitionIndex)->GetStaticField(0x1E850);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_arrayPools()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ArrayPoolsProvider_TypeDefinitionIndex)->GetStaticField(0x1E858);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_POOLING_ARRAYPOOLSPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_POOLING_ARRAYPOOLSPROVIDER__CCTOR_OFFSET))();
		}
	};
}
