#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class Anim;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define TRANSFORMANIMATIONDATA_METHOD_3_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0x104F5910)
#define TRANSFORMANIMATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x104F5960)

inline static constexpr unsigned int TransformAnimationData_TypeDefinitionIndex = 47604;

class TransformAnimationData : public ::UnityEngine::ScriptableObject
{
public:
	::System::String* RootName; // 0x18
	::UnityEngine::Transform* AnimRoot; // 0x20
	::System::Collections::Generic::List_1<::Anim*>* Anims; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMANIMATIONDATA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_7900DB25C44BBC9B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + TRANSFORMANIMATIONDATA_METHOD_3_7900DB25C44BBC9B_OFFSET))(this, a1);
	}
};
