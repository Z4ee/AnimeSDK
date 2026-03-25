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

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ACTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0x18C8ECD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADDREJECTHANDLER_OFFSET UNITYSDK_OFFSET(0x18C8E2A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADDRESOLVEHANDLER_OFFSET UNITYSDK_OFFSET(0x18C8E370)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADD_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18C8DB30)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ALL_1_OFFSET UNITYSDK_OFFSET(0x18C8F2D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ALL_OFFSET UNITYSDK_OFFSET(0x18C8F270)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_CATCH_OFFSET UNITYSDK_OFFSET(0x18C8EAC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_CLEARHANDLERS_OFFSET UNITYSDK_OFFSET(0x18C8E5B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_1_OFFSET UNITYSDK_OFFSET(0x18C8EBC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_2_OFFSET UNITYSDK_OFFSET(0x18C8EC50)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_OFFSET UNITYSDK_OFFSET(0x18C8E930)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GETPENDINGPROMISES_OFFSET UNITYSDK_OFFSET(0x18C8DCB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x18C8DD50)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_ID_OFFSET UNITYSDK_OFFSET(0x18C8DD10)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18C8DD30)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKEREJECTHANDLERS_OFFSET UNITYSDK_OFFSET(0x18C8E5D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKEREJECTHANDLER_OFFSET UNITYSDK_OFFSET(0x18C8E440)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKERESOLVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x18C8E690)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKERESOLVEHANDLER_OFFSET UNITYSDK_OFFSET(0x18C8E500)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_PROPAGATEUNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18C8F9A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RACE_1_OFFSET UNITYSDK_OFFSET(0x18C8F820)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RACE_OFFSET UNITYSDK_OFFSET(0x18C8F7C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REJECTED_OFFSET UNITYSDK_OFFSET(0x18C8F940)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REJECT_OFFSET UNITYSDK_OFFSET(0x18C8E050)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REMOVE_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18C8DBF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RESOLVED_OFFSET UNITYSDK_OFFSET(0x18C8F440)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RESOLVE_OFFSET UNITYSDK_OFFSET(0x18C8E710)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SEQUENCE_1_OFFSET UNITYSDK_OFFSET(0x18C8F5A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x18C8F540)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x18C8DD60)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_ID_OFFSET UNITYSDK_OFFSET(0x18C8DD20)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18C8DD40)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENALL_OFFSET UNITYSDK_OFFSET(0x18C8F1D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENRACE_OFFSET UNITYSDK_OFFSET(0x18C8F720)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x18C8F4A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_1_OFFSET UNITYSDK_OFFSET(0x18C8EC40)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_2_OFFSET UNITYSDK_OFFSET(0x18C8F0A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_3_OFFSET UNITYSDK_OFFSET(0x18C8E9B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_OFFSET UNITYSDK_OFFSET(0x18C8F090)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_TOWAITFOR_OFFSET UNITYSDK_OFFSET(0x18C8FAC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_WITHNAME_OFFSET UNITYSDK_OFFSET(0x18C8ECB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C8DA50)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18C8DE80)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8DD70)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__36_0_OFFSET UNITYSDK_OFFSET(0x18C8FE50)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__37_0_OFFSET UNITYSDK_OFFSET(0x18C8FEB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__38_0_OFFSET UNITYSDK_OFFSET(0x18C8FF10)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__INVOKERESOLVEHANDLERS_B__33_0_OFFSET UNITYSDK_OFFSET(0x18C8FD30)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___CTOR_B__26_0_OFFSET UNITYSDK_OFFSET(0x18C8FD10)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___CTOR_B__26_1_OFFSET UNITYSDK_OFFSET(0x18C8FD20)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_TypeDefinitionIndex = 30587;

	class Promise : public ::System::Object
	{
	public:
		static ::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>** StaticGet_unhandlerException()
		{
			return (::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x36740);
		}
		static ::System::Collections::Generic::HashSet_1<::ZenFulcrum::EmbeddedBrowser::IPromiseInfo*>** StaticGet_pendingPromises()
		{
			return (::System::Collections::Generic::HashSet_1<::ZenFulcrum::EmbeddedBrowser::IPromiseInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x36748);
		}
		static ::System::Int32* StaticGet_nextPromiseId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x10E70);
		}
		static ::System::Boolean* StaticGet_EnablePromiseTracking()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x10E74);
		}
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::Promise_ResolveHandler>* resolveHandlers; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::System::Exception* rejectionException; // 0x20
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::RejectHandler>* rejectHandlers; // 0x28
		::System::Int32 _Id_k__BackingField; // 0x30
		::ZenFulcrum::EmbeddedBrowser::PromiseState _CurState_k__BackingField; // 0x34

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Action_2<::System::Action*, ::System::Action_1<::System::Exception*>*>* resolver)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Action*, ::System::Action_1<::System::Exception*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CTOR_1_OFFSET))(this, resolver);
		}

		static ::System::Void add_UnhandledException(::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>* value)
		{
			return ((::System::Void(*)(::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADD_UNHANDLEDEXCEPTION_OFFSET))(value);
		}

		static ::System::Void remove_UnhandledException(::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>* value)
		{
			return ((::System::Void(*)(::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REMOVE_UNHANDLEDEXCEPTION_OFFSET))(value);
		}

		static ::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromiseInfo*>* GetPendingPromises()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromiseInfo*>*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GETPENDINGPROMISES_OFFSET))();
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_NAME_OFFSET))(this, value);
		}

		::ZenFulcrum::EmbeddedBrowser::PromiseState get_CurState()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::PromiseState(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_CURSTATE_OFFSET))(this);
		}

		::System::Void set_CurState(::ZenFulcrum::EmbeddedBrowser::PromiseState value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::PromiseState))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_CURSTATE_OFFSET))(this, value);
		}

		::System::Void AddRejectHandler(::System::Action_1<::System::Exception*>* onRejected, ::ZenFulcrum::EmbeddedBrowser::IRejectable* rejectable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*, ::ZenFulcrum::EmbeddedBrowser::IRejectable*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADDREJECTHANDLER_OFFSET))(this, onRejected, rejectable);
		}

		::System::Void AddResolveHandler(::System::Action* onResolved, ::ZenFulcrum::EmbeddedBrowser::IRejectable* rejectable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::ZenFulcrum::EmbeddedBrowser::IRejectable*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADDRESOLVEHANDLER_OFFSET))(this, onResolved, rejectable);
		}

		::System::Void InvokeRejectHandler(::System::Action_1<::System::Exception*>* callback, ::ZenFulcrum::EmbeddedBrowser::IRejectable* rejectable, ::System::Exception* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*, ::ZenFulcrum::EmbeddedBrowser::IRejectable*, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKEREJECTHANDLER_OFFSET))(this, callback, rejectable, value);
		}

		::System::Void InvokeResolveHandler(::System::Action* callback, ::ZenFulcrum::EmbeddedBrowser::IRejectable* rejectable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::ZenFulcrum::EmbeddedBrowser::IRejectable*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKERESOLVEHANDLER_OFFSET))(this, callback, rejectable);
		}

		::System::Void ClearHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_CLEARHANDLERS_OFFSET))(this);
		}

		::System::Void InvokeRejectHandlers(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKEREJECTHANDLERS_OFFSET))(this, ex);
		}

		::System::Void InvokeResolveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKERESOLVEHANDLERS_OFFSET))(this);
		}

		::System::Void Reject(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REJECT_OFFSET))(this, ex);
		}

		::System::Void Resolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RESOLVE_OFFSET))(this);
		}

		::System::Void Done(::System::Action* onResolved, ::System::Action_1<::System::Exception*>* onRejected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_OFFSET))(this, onResolved, onRejected);
		}

		::System::Void Done_1(::System::Action* onResolved)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_1_OFFSET))(this, onResolved);
		}

		::System::Void Done_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_2_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* WithName(::System::String* name)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_WITHNAME_OFFSET))(this, name);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Catch(::System::Action_1<::System::Exception*>* onRejected)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_CATCH_OFFSET))(this, onRejected);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Then(::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* onResolved)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_OFFSET))(this, onResolved);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Then_1(::System::Action* onResolved)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_1_OFFSET))(this, onResolved);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Then_2(::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* onResolved, ::System::Action_1<::System::Exception*>* onRejected)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_2_OFFSET))(this, onResolved, onRejected);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Then_3(::System::Action* onResolved, ::System::Action_1<::System::Exception*>* onRejected)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_3_OFFSET))(this, onResolved, onRejected);
		}

		::System::Void ActionHandlers(::ZenFulcrum::EmbeddedBrowser::IRejectable* resultPromise, ::System::Action* resolveHandler, ::System::Action_1<::System::Exception*>* rejectHandler)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::IRejectable*, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ACTIONHANDLERS_OFFSET))(this, resultPromise, resolveHandler, rejectHandler);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* ThenAll(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* chain)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENALL_OFFSET))(this, chain);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* All(::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::IPromise*>* promises)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ALL_OFFSET))(promises);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* All_1(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* promises)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ALL_1_OFFSET))(promises);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* ThenSequence(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*>* chain)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENSEQUENCE_OFFSET))(this, chain);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Sequence(::Il2CppArray<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* fns)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::Il2CppArray<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SEQUENCE_OFFSET))(fns);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Sequence_1(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* fns)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SEQUENCE_1_OFFSET))(fns);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* ThenRace(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* chain)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENRACE_OFFSET))(this, chain);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Race(::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::IPromise*>* promises)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RACE_OFFSET))(promises);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Race_1(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* promises)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RACE_1_OFFSET))(promises);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Resolved()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RESOLVED_OFFSET))();
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Rejected(::System::Exception* ex)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REJECTED_OFFSET))(ex);
		}

		static ::System::Void PropagateUnhandledException(::System::Object* sender, ::System::Exception* ex)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_PROPAGATEUNHANDLEDEXCEPTION_OFFSET))(sender, ex);
		}

		::System::Collections::IEnumerator* ToWaitFor(::System::Boolean abortOnFail)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_TOWAITFOR_OFFSET))(this, abortOnFail);
		}

		::System::Void __ctor_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___CTOR_B__26_0_OFFSET))(this);
		}

		::System::Void __ctor_b__26_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___CTOR_B__26_1_OFFSET))(this, ex);
		}

		::System::Void _InvokeResolveHandlers_b__33_0(::ZenFulcrum::EmbeddedBrowser::Promise_ResolveHandler handler)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Promise_ResolveHandler))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__INVOKERESOLVEHANDLERS_B__33_0_OFFSET))(this, handler);
		}

		::System::Void _Done_b__36_0(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__36_0_OFFSET))(this, ex);
		}

		::System::Void _Done_b__37_0(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__37_0_OFFSET))(this, ex);
		}

		::System::Void _Done_b__38_0(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__38_0_OFFSET))(this, ex);
		}
	};
}
