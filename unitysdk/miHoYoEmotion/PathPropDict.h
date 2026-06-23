#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYOEMOTION_PATHPROPDICT_GETPATHINDEX_OFFSET UNITYSDK_OFFSET(0x1BB0A430)
#define MIHOYOEMOTION_PATHPROPDICT_GETPATH_OFFSET UNITYSDK_OFFSET(0x1BB09E40)
#define MIHOYOEMOTION_PATHPROPDICT_GETPROPINDEX_OFFSET UNITYSDK_OFFSET(0x1BB0B230)
#define MIHOYOEMOTION_PATHPROPDICT_GETPROP_OFFSET UNITYSDK_OFFSET(0x1BB0AC40)
#define MIHOYOEMOTION_PATHPROPDICT_GET_DICT_OFFSET UNITYSDK_OFFSET(0x1BB09C90)
#define MIHOYOEMOTION_PATHPROPDICT_ISDICTINITED_OFFSET UNITYSDK_OFFSET(0x1BB09B10)
#define MIHOYOEMOTION_PATHPROPDICT_SAVE_OFFSET UNITYSDK_OFFSET(0x1BB0BA40)
#define MIHOYOEMOTION_PATHPROPDICT_SET_DICT_OFFSET UNITYSDK_OFFSET(0x1BB09DE0)
#define MIHOYOEMOTION_PATHPROPDICT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB0BBC0)
#define MIHOYOEMOTION_PATHPROPDICT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0BA80)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int PathPropDict_TypeDefinitionIndex = 39413;

	class PathPropDict : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::miHoYoEmotion::PathPropDict** StaticGet_dict()
		{
			return (::miHoYoEmotion::PathPropDict**)Il2CppClass::FromTypeDefinitionIndex(PathPropDict_TypeDefinitionIndex)->GetStaticField(0x2AFC0);
		}
		static ::System::Boolean* StaticGet_DYNAMIC_ADD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PathPropDict_TypeDefinitionIndex)->GetStaticField(0x98E0);
		}
		// static const ::System::Int32 PATH_STEP = 0x3E8; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* pathList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* propList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDictInited()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_ISDICTINITED_OFFSET))();
		}

		static ::miHoYoEmotion::PathPropDict* get_Dict()
		{
			return ((::miHoYoEmotion::PathPropDict*(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_GET_DICT_OFFSET))();
		}

		static ::System::Void set_Dict(::miHoYoEmotion::PathPropDict* value)
		{
			return ((::System::Void(*)(::miHoYoEmotion::PathPropDict*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_SET_DICT_OFFSET))(value);
		}

		static ::System::String* GetPath(::System::Int32 index)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_GETPATH_OFFSET))(index);
		}

		static ::System::Int32 GetPathIndex(::System::String* path)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_GETPATHINDEX_OFFSET))(path);
		}

		static ::System::String* GetProp(::System::Int32 index)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_GETPROP_OFFSET))(index);
		}

		static ::System::Int32 GetPropIndex(::System::String* prop)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_GETPROPINDEX_OFFSET))(prop);
		}

		static ::System::Void Save()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_SAVE_OFFSET))();
		}
	};
}
