#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/Axis.h"
#include "unitysdk/UnityEngine/Animations/ConstraintSource.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_ADDSOURCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E878560)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_ADDSOURCE_OFFSET UNITYSDK_OFFSET(0x1E878550)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E8784A0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E878740)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E878700)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCES_OFFSET UNITYSDK_OFFSET(0x1E8784B0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCE_OFFSET UNITYSDK_OFFSET(0x1E8786B0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E878450)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_LOCKED_OFFSET UNITYSDK_OFFSET(0x1E878470)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E878380)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEATREST_OFFSET UNITYSDK_OFFSET(0x1E878330)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E878400)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E8783B0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALINGAXIS_OFFSET UNITYSDK_OFFSET(0x1E878430)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SOURCECOUNT_OFFSET UNITYSDK_OFFSET(0x1E878490)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1E878310)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1E878300)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_REMOVESOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E8786A0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_REMOVESOURCE_OFFSET UNITYSDK_OFFSET(0x1E878570)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8787A0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E878790)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E878540)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCES_OFFSET UNITYSDK_OFFSET(0x1E8784C0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCE_OFFSET UNITYSDK_OFFSET(0x1E878750)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E878460)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_LOCKED_OFFSET UNITYSDK_OFFSET(0x1E878480)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8783A0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEATREST_OFFSET UNITYSDK_OFFSET(0x1E878390)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E878420)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E878410)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALINGAXIS_OFFSET UNITYSDK_OFFSET(0x1E878440)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1E878320)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_VALIDATESOURCEINDEX_OFFSET UNITYSDK_OFFSET(0x1E8785A0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8782A0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int ScaleConstraint_TypeDefinitionIndex = 6697;

	class ScaleConstraint : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::Animations::ScaleConstraint* self)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::ScaleConstraint*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_INTERNAL_CREATE_OFFSET))(self);
		}

		::System::Single get_weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_weight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_WEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_scaleAtRest()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEATREST_OFFSET))(this);
		}

		::System::Void set_scaleAtRest(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEATREST_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_scaleOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEOFFSET_OFFSET))(this);
		}

		::System::Void set_scaleOffset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Animations::Axis get_scalingAxis()
		{
			return ((::UnityEngine::Animations::Axis(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALINGAXIS_OFFSET))(this);
		}

		::System::Void set_scalingAxis(::UnityEngine::Animations::Axis value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::Axis))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALINGAXIS_OFFSET))(this, value);
		}

		::System::Boolean get_constraintActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET))(this);
		}

		::System::Void set_constraintActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_locked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_LOCKED_OFFSET))(this);
		}

		::System::Void set_locked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_LOCKED_OFFSET))(this, value);
		}

		::System::Int32 get_sourceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SOURCECOUNT_OFFSET))(this);
		}

		static ::System::Int32 GetSourceCountInternal(::UnityEngine::Animations::ScaleConstraint* self)
		{
			return ((::System::Int32(*)(::UnityEngine::Animations::ScaleConstraint*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET))(self);
		}

		::System::Void GetSources(::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>* sources)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCES_OFFSET))(this, sources);
		}

		::System::Void SetSources(::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>* sources)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCES_OFFSET))(this, sources);
		}

		static ::System::Void SetSourcesInternal(::UnityEngine::Animations::ScaleConstraint* self, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>* sources)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::ScaleConstraint*, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCESINTERNAL_OFFSET))(self, sources);
		}

		::System::Int32 AddSource(::UnityEngine::Animations::ConstraintSource source)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animations::ConstraintSource))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_ADDSOURCE_OFFSET))(this, source);
		}

		::System::Void RemoveSource(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_REMOVESOURCE_OFFSET))(this, index);
		}

		::System::Void RemoveSourceInternal(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_REMOVESOURCEINTERNAL_OFFSET))(this, index);
		}

		::UnityEngine::Animations::ConstraintSource GetSource(::System::Int32 index)
		{
			return ((::UnityEngine::Animations::ConstraintSource(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCE_OFFSET))(this, index);
		}

		::UnityEngine::Animations::ConstraintSource GetSourceInternal(::System::Int32 index)
		{
			return ((::UnityEngine::Animations::ConstraintSource(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCEINTERNAL_OFFSET))(this, index);
		}

		::System::Void SetSource(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCE_OFFSET))(this, index, source);
		}

		::System::Void SetSourceInternal(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCEINTERNAL_OFFSET))(this, index, source);
		}

		::System::Void ValidateSourceIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_VALIDATESOURCEINDEX_OFFSET))(this, index);
		}

		::System::Void get_scaleAtRest_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEATREST_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_scaleAtRest_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEATREST_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_scaleOffset_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEOFFSET_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_scaleOffset_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEOFFSET_INJECTED_OFFSET))(this, value);
		}

		::System::Int32 AddSource_Injected(::UnityEngine::Animations::ConstraintSource& source)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animations::ConstraintSource&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_ADDSOURCE_INJECTED_OFFSET))(this, source);
		}

		::System::Void GetSourceInternal_Injected(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET))(this, index, ret);
		}

		::System::Void SetSourceInternal_Injected(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource& source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET))(this, index, source);
		}
	};
}
