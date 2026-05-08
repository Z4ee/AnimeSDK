#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class ListChangedEventArgs; }
namespace System::Data { class DataViewListener; }
namespace System::Data { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Listeners_1_Action_4; }
namespace System::Data { template <typename T1, typename T2, typename T3> class Listeners_1_Func_2; }

#define SYSTEM_DATA_INDEX___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE4BC20)
#define SYSTEM_DATA_INDEX___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE4BC60)
#define SYSTEM_DATA_INDEX___C__ONLISTCHANGED_B__85_0_OFFSET UNITYSDK_OFFSET(0x1BE4BC80)
#define SYSTEM_DATA_INDEX___C___CTOR_B__22_0_OFFSET UNITYSDK_OFFSET(0x1BE4BC70)

namespace System::Data
{
	inline static constexpr unsigned int Index___c_TypeDefinitionIndex = 37063;

	class Index___c : public ::System::Object
	{
	public:
		static ::System::Data::Index___c** StaticGet___9()
		{
			return (::System::Data::Index___c**)Il2CppClass::FromTypeDefinitionIndex(Index___c_TypeDefinitionIndex)->GetStaticField(0x274E0);
		}
		static ::System::Data::Listeners_1_Func_2<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Data::Listeners_1_Func_2<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Index___c_TypeDefinitionIndex)->GetStaticField(0x274E8);
		}
		static ::System::Data::Listeners_1_Action_4<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, ::System::Boolean, ::System::Boolean>** StaticGet___9__85_0()
		{
			return (::System::Data::Listeners_1_Action_4<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, ::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Index___c_TypeDefinitionIndex)->GetStaticField(0x274F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__22_0(::System::Data::DataViewListener* listener)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataViewListener*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX___C___CTOR_B__22_0_OFFSET))(this, listener);
		}

		::System::Void _OnListChanged_b__85_0(::System::Data::DataViewListener* listener, ::System::ComponentModel::ListChangedEventArgs* args, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX___C__ONLISTCHANGED_B__85_0_OFFSET))(this, listener, args, arg2, arg3);
		}
	};
}
