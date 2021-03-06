#ifndef PHYSX_CONTENT_ACTOR_RIGIDSTATIC_LOCAL_HPP
#define PHYSX_CONTENT_ACTOR_RIGIDSTATIC_LOCAL_HPP

#include <PxPhysicsAPI.h>

#include <neb/fnd/actor/RigidStatic/local.hpp>

#include <PhysX/core/actor/rigidstatic/base.hpp>
#include <PhysX/core/actor/rigidactor/local.hpp>
#include <PhysX/core/actor/util/decl.hpp>

namespace phx { namespace core { namespace actor { namespace rigidstatic {



	class local:
		virtual public neb::fnd::actor::rigidstatic::local,
		virtual public phx::core::actor::rigidactor::local,
		virtual public phx::core::actor::rigidstatic::base
	{
		public:
			local(std::shared_ptr<phx::core::actor::util::parent>);

			virtual void					init();
			virtual void					release();
			virtual void					step(gal::etc::timestep const & ts);



	};


}}}}

#endif


