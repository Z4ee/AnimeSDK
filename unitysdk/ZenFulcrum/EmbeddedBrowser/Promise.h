#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/PromiseState.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/Promise_ResolveHandler.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/RejectHandler.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class EventHandler_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ZenFulcrum::EmbeddedBrowser { class ExceptionEventArgs; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromiseInfo; }
namespace ZenFulcrum::EmbeddedBrowser { class IRejectable; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class IPromise_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ACTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0x1D7EF620)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADDREJECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D7EEA90)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADDRESOLVEHANDLER_OFFSET UNITYSDK_OFFSET(0x1D7EEBA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADD_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D7EE3F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ALL_1_OFFSET UNITYSDK_OFFSET(0x1D7EFD30)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ALL_OFFSET UNITYSDK_OFFSET(0x1D7EFCD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_CATCH_OFFSET UNITYSDK_OFFSET(0x1D7EF3B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_CLEARHANDLERS_OFFSET UNITYSDK_OFFSET(0x1D7EEE20)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_1_OFFSET UNITYSDK_OFFSET(0x1D7EF4D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_2_OFFSET UNITYSDK_OFFSET(0x1D7EF580)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_OFFSET UNITYSDK_OFFSET(0x1D7EF1D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GETPENDINGPROMISES_OFFSET UNITYSDK_OFFSET(0x1D7EE510)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1D7EE5B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D7EE570)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D7EE590)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKEREJECTHANDLERS_OFFSET UNITYSDK_OFFSET(0x1D7EEE30)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKEREJECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D7EECB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKERESOLVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x1D7EEF10)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKERESOLVEHANDLER_OFFSET UNITYSDK_OFFSET(0x1D7EED70)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_PROPAGATEUNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D7F0490)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RACE_1_OFFSET UNITYSDK_OFFSET(0x1D7F02F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RACE_OFFSET UNITYSDK_OFFSET(0x1D7F0290)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REJECTED_OFFSET UNITYSDK_OFFSET(0x1D7F0430)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REJECT_OFFSET UNITYSDK_OFFSET(0x1D7EE8E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REMOVE_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D7EE480)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RESOLVED_OFFSET UNITYSDK_OFFSET(0x1D7EFEB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1D7EEFA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SEQUENCE_1_OFFSET UNITYSDK_OFFSET(0x1D7F0030)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D7EFFD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1D7EE5C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_ID_OFFSET UNITYSDK_OFFSET(0x1D7EE580)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D7EE5A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENALL_OFFSET UNITYSDK_OFFSET(0x1D7EFC10)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENRACE_OFFSET UNITYSDK_OFFSET(0x1D7F01D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D7EFF10)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_1_OFFSET UNITYSDK_OFFSET(0x1D7EF570)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_2_OFFSET UNITYSDK_OFFSET(0x1D7EFAC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_3_OFFSET UNITYSDK_OFFSET(0x1D7EF280)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_OFFSET UNITYSDK_OFFSET(0x1D7EFAB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_TOWAITFOR_OFFSET UNITYSDK_OFFSET(0x1D7F05C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_WITHNAME_OFFSET UNITYSDK_OFFSET(0x1D7EF600)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7EE310)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D7EE6E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EE5D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__36_0_OFFSET UNITYSDK_OFFSET(0x1D7F09F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__37_0_OFFSET UNITYSDK_OFFSET(0x1D7F0A50)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__38_0_OFFSET UNITYSDK_OFFSET(0x1D7F0AB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__INVOKERESOLVEHANDLERS_B__33_0_OFFSET UNITYSDK_OFFSET(0x1D7F0870)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___CTOR_B__26_0_OFFSET UNITYSDK_OFFSET(0x1D7F0850)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___CTOR_B__26_1_OFFSET UNITYSDK_OFFSET(0x1D7F0860)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_TypeDefinitionIndex = 38248;

	class Promise : public ::System::Object
	{
	public:
		static ::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>** StaticGet_unhandlerException()
		{
			return (::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x45E40);
		}
		static ::System::Collections::Generic::HashSet_1<::ZenFulcrum::EmbeddedBrowser::IPromiseInfo*>** StaticGet_pendingPromises()
		{
			return (::System::Collections::Generic::HashSet_1<::ZenFulcrum::EmbeddedBrowser::IPromiseInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x45E48);
		}
		static ::System::Int32* StaticGet_nextPromiseId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x104E0);
		}
		static ::System::Boolean* StaticGet_EnablePromiseTracking()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x104E4);
		}
		::System::String* _Name_k__BackingField; // 0x10
		::System::Exception* rejectionException; // 0x18
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::RejectHandler>* rejectHandlers; // 0x20
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::Promise_ResolveHandler>* resolveHandlers; // 0x28
		::ZenFulcrum::EmbeddedBrowser::PromiseState _CurState_k__BackingField; // 0x30
		::System::Int32 _Id_k__BackingField; // 0x34

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Action_2<::System::Action*, ::System::Action_1<::System::Exception*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Action*, ::System::Action_1<::System::Exception*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void add_UnhandledException(::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>* a1)
		{
			return ((::System::Void(*)(::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADD_UNHANDLEDEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void remove_UnhandledException(::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>* a1)
		{
			return ((::System::Void(*)(::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REMOVE_UNHANDLEDEXCEPTION_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromiseInfo*>* GetPendingPromises()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromiseInfo*>*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GETPENDINGPROMISES_OFFSET))();
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_NAME_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::PromiseState get_CurState()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::PromiseState(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_CURSTATE_OFFSET))(this);
		}

		::System::Void set_CurState(::ZenFulcrum::EmbeddedBrowser::PromiseState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::PromiseState))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_CURSTATE_OFFSET))(this, a1);
		}

		::System::Void AddRejectHandler(::System::Action_1<::System::Exception*>* a1, ::ZenFulcrum::EmbeddedBrowser::IRejectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*, ::ZenFulcrum::EmbeddedBrowser::IRejectable*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADDREJECTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void AddResolveHandler(::System::Action* a1, ::ZenFulcrum::EmbeddedBrowser::IRejectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::ZenFulcrum::EmbeddedBrowser::IRejectable*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADDRESOLVEHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void InvokeRejectHandler(::System::Action_1<::System::Exception*>* a1, ::ZenFulcrum::EmbeddedBrowser::IRejectable* a2, ::System::Exception* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*, ::ZenFulcrum::EmbeddedBrowser::IRejectable*, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKEREJECTHANDLER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InvokeResolveHandler(::System::Action* a1, ::ZenFulcrum::EmbeddedBrowser::IRejectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::ZenFulcrum::EmbeddedBrowser::IRejectable*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKERESOLVEHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void ClearHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_CLEARHANDLERS_OFFSET))(this);
		}

		::System::Void InvokeRejectHandlers(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKEREJECTHANDLERS_OFFSET))(this, a1);
		}

		::System::Void InvokeResolveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKERESOLVEHANDLERS_OFFSET))(this);
		}

		::System::Void Reject(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REJECT_OFFSET))(this, a1);
		}

		::System::Void Resolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RESOLVE_OFFSET))(this);
		}

		::System::Void Done(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_OFFSET))(this, a1, a2);
		}

		::System::Void Done_1(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_1_OFFSET))(this, a1);
		}

		::System::Void Done_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_2_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* WithName(::System::String* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_WITHNAME_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Catch(::System::Action_1<::System::Exception*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_CATCH_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Then(::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Then_1(::System::Action* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_1_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Then_2(::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_2_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Then_3(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_3_OFFSET))(this, a1, a2);
		}

		::System::Void ActionHandlers(::ZenFulcrum::EmbeddedBrowser::IRejectable* a1, ::System::Action* a2, ::System::Action_1<::System::Exception*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::IRejectable*, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ACTIONHANDLERS_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* ThenAll(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENALL_OFFSET))(this, a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* All(::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ALL_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* All_1(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ALL_1_OFFSET))(a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* ThenSequence(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENSEQUENCE_OFFSET))(this, a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Sequence(::Il2CppArray<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::Il2CppArray<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SEQUENCE_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Sequence_1(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SEQUENCE_1_OFFSET))(a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* ThenRace(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENRACE_OFFSET))(this, a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Race(::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RACE_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Race_1(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RACE_1_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Resolved()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RESOLVED_OFFSET))();
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Rejected(::System::Exception* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REJECTED_OFFSET))(a1);
		}

		static ::System::Void PropagateUnhandledException(::System::Object* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_PROPAGATEUNHANDLEDEXCEPTION_OFFSET))(a1, a2);
		}

		::System::Collections::IEnumerator* ToWaitFor(::System::Boolean a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_TOWAITFOR_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___CTOR_B__26_0_OFFSET))(this);
		}

		::System::Void __ctor_b__26_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___CTOR_B__26_1_OFFSET))(this, a1);
		}

		::System::Void _InvokeResolveHandlers_b__33_0(::ZenFulcrum::EmbeddedBrowser::Promise_ResolveHandler a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Promise_ResolveHandler))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__INVOKERESOLVEHANDLERS_B__33_0_OFFSET))(this, a1);
		}

		::System::Void _Done_b__36_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__36_0_OFFSET))(this, a1);
		}

		::System::Void _Done_b__37_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__37_0_OFFSET))(this, a1);
		}

		::System::Void _Done_b__38_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__38_0_OFFSET))(this, a1);
		}
	};
}
