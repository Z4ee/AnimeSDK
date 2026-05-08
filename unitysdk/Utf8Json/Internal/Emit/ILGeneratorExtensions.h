#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1BE27890)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITBOXORDONOTHING_OFFSET UNITYSDK_OFFSET(0x1BE27E20)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITCALL_OFFSET UNITYSDK_OFFSET(0x1BE28380)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITFALSE_OFFSET UNITYSDK_OFFSET(0x1BE27970)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITINCREMENTFOR_OFFSET UNITYSDK_OFFSET(0x1BE289A0)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITINTZERORETURN_OFFSET UNITYSDK_OFFSET(0x1BE285E0)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDARGA_OFFSET UNITYSDK_OFFSET(0x1BE28140)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDARG_OFFSET UNITYSDK_OFFSET(0x1BE27EC0)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDC_I4_OFFSET UNITYSDK_OFFSET(0x1BE279F0)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDFLD_OFFSET UNITYSDK_OFFSET(0x1BE28460)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDLOCA_1_OFFSET UNITYSDK_OFFSET(0x1BE277F0)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDLOCA_OFFSET UNITYSDK_OFFSET(0x1BE27720)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDLOC_1_OFFSET UNITYSDK_OFFSET(0x1BE274E0)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDLOC_OFFSET UNITYSDK_OFFSET(0x1BE272E0)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDSFLD_OFFSET UNITYSDK_OFFSET(0x1BE284E0)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLOADTHIS_OFFSET UNITYSDK_OFFSET(0x1BE280C0)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITNULLRETURN_OFFSET UNITYSDK_OFFSET(0x1BE286C0)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITPOP_OFFSET UNITYSDK_OFFSET(0x1BE282E0)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITRET_OFFSET UNITYSDK_OFFSET(0x1BE28560)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITSTARG_OFFSET UNITYSDK_OFFSET(0x1BE28210)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITSTLOC_1_OFFSET UNITYSDK_OFFSET(0x1BE27700)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITSTLOC_OFFSET UNITYSDK_OFFSET(0x1BE27500)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITTHROWNOTIMPLEMENTED_OFFSET UNITYSDK_OFFSET(0x1BE287D0)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITTRUE_OFFSET UNITYSDK_OFFSET(0x1BE27810)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITULONG_OFFSET UNITYSDK_OFFSET(0x1BE28750)
#define UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITUNBOXORCAST_OFFSET UNITYSDK_OFFSET(0x1BE27D60)

namespace Utf8Json::Internal::Emit
{
	inline static constexpr unsigned int ILGeneratorExtensions_TypeDefinitionIndex = 85676;

	class ILGeneratorExtensions : public ::System::Object
	{
	public:
		static ::System::Void EmitLdloc(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDLOC_OFFSET))(il, index);
		}

		static ::System::Void EmitLdloc_1(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* local)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDLOC_1_OFFSET))(il, local);
		}

		static ::System::Void EmitStloc(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITSTLOC_OFFSET))(il, index);
		}

		static ::System::Void EmitStloc_1(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* local)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITSTLOC_1_OFFSET))(il, local);
		}

		static ::System::Void EmitLdloca(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDLOCA_OFFSET))(il, index);
		}

		static ::System::Void EmitLdloca_1(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* local)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDLOCA_1_OFFSET))(il, local);
		}

		static ::System::Void EmitTrue(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITTRUE_OFFSET))(il);
		}

		static ::System::Void EmitFalse(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITFALSE_OFFSET))(il);
		}

		static ::System::Void EmitBoolean(::System::Reflection::Emit::ILGenerator* il, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITBOOLEAN_OFFSET))(il, value);
		}

		static ::System::Void EmitLdc_I4(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDC_I4_OFFSET))(il, value);
		}

		static ::System::Void EmitUnboxOrCast(::System::Reflection::Emit::ILGenerator* il, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITUNBOXORCAST_OFFSET))(il, type);
		}

		static ::System::Void EmitBoxOrDoNothing(::System::Reflection::Emit::ILGenerator* il, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITBOXORDONOTHING_OFFSET))(il, type);
		}

		static ::System::Void EmitLdarg(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDARG_OFFSET))(il, index);
		}

		static ::System::Void EmitLoadThis(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLOADTHIS_OFFSET))(il);
		}

		static ::System::Void EmitLdarga(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDARGA_OFFSET))(il, index);
		}

		static ::System::Void EmitStarg(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITSTARG_OFFSET))(il, index);
		}

		static ::System::Void EmitPop(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITPOP_OFFSET))(il, count);
		}

		static ::System::Void EmitCall(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::MethodInfo* methodInfo)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITCALL_OFFSET))(il, methodInfo);
		}

		static ::System::Void EmitLdfld(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::FieldInfo* fieldInfo)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDFLD_OFFSET))(il, fieldInfo);
		}

		static ::System::Void EmitLdsfld(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::FieldInfo* fieldInfo)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITLDSFLD_OFFSET))(il, fieldInfo);
		}

		static ::System::Void EmitRet(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITRET_OFFSET))(il);
		}

		static ::System::Void EmitIntZeroReturn(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITINTZERORETURN_OFFSET))(il);
		}

		static ::System::Void EmitNullReturn(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITNULLRETURN_OFFSET))(il);
		}

		static ::System::Void EmitULong(::System::Reflection::Emit::ILGenerator* il, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::UInt64))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITULONG_OFFSET))(il, value);
		}

		static ::System::Void EmitThrowNotimplemented(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITTHROWNOTIMPLEMENTED_OFFSET))(il);
		}

		static ::System::Void EmitIncrementFor(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* conditionGreater, ::System::Action_1<::System::Reflection::Emit::LocalBuilder*>* emitBody)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*, ::System::Action_1<::System::Reflection::Emit::LocalBuilder*>*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ILGENERATOREXTENSIONS_EMITINCREMENTFOR_OFFSET))(il, conditionGreater, emitBody);
		}
	};
}
