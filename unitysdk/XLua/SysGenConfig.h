#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define XLUA_SYSGENCONFIG_GET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0xE960F20)
#define XLUA_SYSGENCONFIG_GET_GCOPTIMIZE_OFFSET UNITYSDK_OFFSET(0xE960AB0)

namespace XLua
{
	inline static constexpr unsigned int SysGenConfig_TypeDefinitionIndex = 47950;

	class SysGenConfig : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Type*>* get_GCOptimize()
		{
			return ((::System::Collections::Generic::List_1<::System::Type*>*(*)())((::PBYTE)hIl2Cpp + XLUA_SYSGENCONFIG_GET_GCOPTIMIZE_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::String*>*>* get_AdditionalProperties()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::String*>*>*(*)())((::PBYTE)hIl2Cpp + XLUA_SYSGENCONFIG_GET_ADDITIONALPROPERTIES_OFFSET))();
		}
	};
}
