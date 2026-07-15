#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBE8D70)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE8DB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__SEQUENCE_B__54_0_OFFSET UNITYSDK_OFFSET(0x1BBE8DC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__TOWAITFOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1BBE8E80)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__TOWAITFOR_B__63_1_OFFSET UNITYSDK_OFFSET(0x1BBE8E90)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c_TypeDefinitionIndex = 37392;

	class Promise___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__63_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Promise___c_TypeDefinitionIndex)->GetStaticField(0x65860);
		}
		static ::ZenFulcrum::EmbeddedBrowser::Promise___c** StaticGet___9()
		{
			return (::ZenFulcrum::EmbeddedBrowser::Promise___c**)Il2CppClass::FromTypeDefinitionIndex(Promise___c_TypeDefinitionIndex)->GetStaticField(0x65868);
		}
		static ::System::Action** StaticGet___9__63_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Promise___c_TypeDefinitionIndex)->GetStaticField(0x65870);
		}
		static ::System::Func_3<::ZenFulcrum::EmbeddedBrowser::IPromise*, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*, ::ZenFulcrum::EmbeddedBrowser::IPromise*>** StaticGet___9__54_0()
		{
			return (::System::Func_3<::ZenFulcrum::EmbeddedBrowser::IPromise*, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*, ::ZenFulcrum::EmbeddedBrowser::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(Promise___c_TypeDefinitionIndex)->GetStaticField(0x65878);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__CTOR_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* _Sequence_b__54_0(::ZenFulcrum::EmbeddedBrowser::IPromise* a1, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a2)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::IPromise*, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__SEQUENCE_B__54_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ToWaitFor_b__63_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__TOWAITFOR_B__63_0_OFFSET))(this);
		}

		::System::Void _ToWaitFor_b__63_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__TOWAITFOR_B__63_1_OFFSET))(this, a1);
		}
	};
}
