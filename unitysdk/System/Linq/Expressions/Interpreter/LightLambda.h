#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Dynamic::Utils { template <typename T1, typename T2> class CacheDict_2; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class Interpreter; }
namespace System::Linq::Expressions::Interpreter { class LightDelegateCreator; }
namespace System::Runtime::CompilerServices { class IStrongBox; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_CREATECUSTOMDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AD9E4A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_GETRUNDELEGATECTOR_OFFSET UNITYSDK_OFFSET(0x1AD9D7B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_MAKEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AD9D4C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_MAKEFRAME_OFFSET UNITYSDK_OFFSET(0x1AD9D750)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_MAKERUNDELEGATECTOR_OFFSET UNITYSDK_OFFSET(0x1AD9D950)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_RUNVOID0_OFFSET UNITYSDK_OFFSET(0x1AD9D550)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_RUNVOID_OFFSET UNITYSDK_OFFSET(0x1AD6FEC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_RUN_OFFSET UNITYSDK_OFFSET(0x1AD6FB20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD9F430)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD9D490)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightLambda_TypeDefinitionIndex = 3482;

	class LightLambda : public ::System::Object
	{
	public:
		static ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*>** StaticGet__runCache()
		{
			return (::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*>**)Il2CppClass::FromTypeDefinitionIndex(LightLambda_TypeDefinitionIndex)->GetStaticField(0x2B460);
		}
		::System::Linq::Expressions::Interpreter::LightDelegateCreator* _delegateCreator; // 0x10
		::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* _closure; // 0x18
		::System::Linq::Expressions::Interpreter::Interpreter* _interpreter; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::LightDelegateCreator* a1, ::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightDelegateCreator*, ::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA__CCTOR_OFFSET))();
		}

		::System::Void RunVoid0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_RUNVOID0_OFFSET))(this);
		}

		static ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>* GetRunDelegateCtor(::System::Type* a1)
		{
			return ((::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_GETRUNDELEGATECTOR_OFFSET))(a1);
		}

		static ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>* MakeRunDelegateCtor(::System::Type* a1)
		{
			return ((::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_MAKERUNDELEGATECTOR_OFFSET))(a1);
		}

		::System::Delegate* CreateCustomDelegate(::System::Type* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_CREATECUSTOMDELEGATE_OFFSET))(this, a1);
		}

		::System::Delegate* MakeDelegate(::System::Type* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_MAKEDELEGATE_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Interpreter::InterpretedFrame* MakeFrame()
		{
			return ((::System::Linq::Expressions::Interpreter::InterpretedFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_MAKEFRAME_OFFSET))(this);
		}

		::System::Object* Run(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_RUN_OFFSET))(this, a1);
		}

		::System::Object* RunVoid(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_RUNVOID_OFFSET))(this, a1);
		}
	};
}
