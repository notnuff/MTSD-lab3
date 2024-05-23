FROM python:latest

COPY . /project
   #first mistake in provided build sequence - we use python3 instead of python

RUN python3 -m venv ./.venv 

RUN ls

#here i replaced . shortcut with source, so it is more clear what`s going on
RUN source ./.venv/bin/activate 

RUN pip install -r requirements/backend.in

#when we built our image, we can start the program:
CMD ["uvicorn", "spaceship.main:app", "--host=0.0.0.0", "--port=8080"]
